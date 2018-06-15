#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 40


typedef struct student STUDENT;

typedef struct student
{
	char *name;

	int count;
	int length;

	STUDENT *next;
}STUDENT;



STUDENT * search(STUDENT * list, char *name);
STUDENT * create_list(char *name);




int frequent(STUDENT *list)
{

	STUDENT *temp = list;

	int max = list -> count;
	while (temp)
        {

		if (max < temp -> count)
		{
			max = temp -> count;
		}


                temp = temp -> next;
        }

	return max;

}


STUDENT * add(STUDENT * list, char *name)
{
	if (!list)
	{
		return create_list(name);
	}

	STUDENT *temp = search(list, name);

	if (!temp)
	{
		STUDENT *new = malloc(sizeof(STUDENT));
		STUDENT *trav = list;

		while (trav -> next)
		{
			trav = trav -> next;
		}

		trav -> next = new;
		new -> next = NULL;

		// strcpy(new -> name, name);

		new -> name = malloc(sizeof(char) * MAX);
		strcpy(new -> name, name);
	

		new -> count = 1;
		new -> length = strlen(name);		

	
		return list;	
	}

	temp -> count ++;

	return list;

}



STUDENT * create_list(char *name)
{
	STUDENT *list = malloc(sizeof(STUDENT));

	list -> name = malloc(sizeof(char) * MAX);	


	strcpy(list -> name, name);

	list -> count = 1;
	
	list -> length = strlen(name);

	return list;
	
}


STUDENT * search(STUDENT * list, char *name)
{
	STUDENT *temp = list;

	while (temp)
	{
		if (!strcmp(temp -> name, name))
		{
			return temp;
		}
		
		temp = temp -> next;
	}

	return NULL;
}


STUDENT *delete(STUDENT *list, char *name)
{
	STUDENT *temp = search(list, name);

	if (!temp)
	{
		return list;
	}

	if (temp -> count > 1)
	{
		temp -> count --;

		return list;
	}

	STUDENT *prev = list;

	while (prev -> next)
        {
                if (!strcmp(prev -> next -> name, name))
                {
                        break;
                }

                prev = prev -> next;
        }


	prev -> next = temp -> next;
	free(temp);

	return list;
}




STUDENT *add_sort(STUDENT *list, char *name)
{
        if (!list)
        {
                return create_list(name);
        }

        STUDENT *temp = search(list, name);

        if (!temp)
        {
                STUDENT *new = malloc(sizeof(STUDENT));
                STUDENT *trav = list;

                while (trav -> next)
                {
			
			if (strcmp(trav -> next -> name, name) > 0)
			{
				break;
			}
		
                        trav = trav -> next;
                }

                new -> next = trav -> next;

		new -> name = malloc(sizeof(char) * 40);
                trav -> next = new;

                strcpy(new -> name, name);
                new -> count = 1;
                new -> length = strlen(name);


                return list;
        }

        temp -> count ++;

        return list;
	
}



void print(STUDENT *list)
{

	STUDENT *temp = list;	
	int i = 1;
	 while (temp)
        {
               
               
                printf("%s %d %d \n", temp -> name, i, temp -> count);
               	
		i ++;

                temp = temp -> next;
        }

}


void main()
{
	STUDENT * list = NULL;

	int num;

	scanf("%d\n", &num);
	
	for (int i = 0; i < num; i++)
	{
		char name[MAX];

		scanf("%s\n", name);

		list = add_sort(list, name);
	}

	print(list);

	printf("%d", frequent(list));
}

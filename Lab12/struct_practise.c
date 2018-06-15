#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	char id[20];
	char name[40];

	char gender;
	char resi;

	int age;
	float cgpa;

	char email[100];

	
}STUD;


void populate(STUD arr[], int no_studs)
{
	for (int i = 0; i < no_studs; i ++)
	{
		scanf(" %[^,]", arr[i].id);
		getchar();
		scanf(" %[^,]", arr[i].name);
		getchar();
		scanf(" %c", &arr[i].gender);
		getchar();
		scanf(" %d", &arr[i].age);
		getchar();
		scanf(" %c", &arr[i].resi);
		getchar();
		scanf(" %f", &arr[i].cgpa);
		getchar();
	}

}


void generate_email(char id[], char email[])
{
	//f20170084@pilani.bits-pilani.ac.in

	email[0] = 'f';


	// year
	for (int i = 1; i < 5; i ++)
	{
		email[i] = id[i - 1];
	}

	//id
	
	for (int i = 5; i < 9; i ++)
	{
		email[i] = id[i + 3];
	}

	char end[40] = "@pilani.bits-pilani.ac.in";

	for (int i = 9; i < 9 + strlen(end); i ++)
	{
		email[i] = end[i - 9];
	}


}


void store_email(STUD arr[], int no_studs)
{
	for (int i = 0; i < no_studs; i ++)
	{
		generate_email(arr[i].id, arr[i].email);	
	}
}



void print_rec(STUD arr[], int no_studs)
{
	for (int i = 0; i < no_studs; i ++)
	{
		printf("%s %s \n", arr[i].id, arr[i].name);
		
		printf("Gender: %c \nAge: %d\n", arr[i].gender, arr[i].age);

		if (arr[i].resi == 'H')
			printf("Residence : Hostel \n");

		else
			printf("Residence: Day Scholar \n");

		if (arr[i].cgpa == 0.00)
			printf("CGPA: 0.00");
		else
			printf("CGPA: %f", arr[i].cgpa);


		
		printf("\nEmail: %s \n \n------------------------\n \n", arr[i].email);
			
	}
}


float calc_avg_cg(STUD *arr, int no_studs)
{

	float avg = 0;
	for (int i = 0; i < no_studs; i ++)
	{
		avg += arr[i].cgpa;
	}

	return avg / no_studs;
}

void print_count(STUD *arr, int gnd_sort, int resi_sort, int size)
{

	int no_studs = size;

	if (gnd_sort)
	{

		int males = 0, females = 0;
		for (int i = 0; i < no_studs; i ++)
		{
			if (arr[i].gender == 'M')
				males ++;

			else if (arr[i].gender == 'F')
				females ++;
			
		}

		printf("%d %d", males, females);
	}


	if (resi_sort)
	{

		int day = 0, hos = 0;

		for (int i = 0; i < no_studs; i ++)
                {
                        if (arr[i].resi == 'H')
                                hos ++;

                        else if (arr[i].gender == 'D')
                                day  ++;

                }

		printf("%d %d", hos, day);

	}
	
}



STUD * sort_id(STUD *arr[], int no_studs)
{



	for (int i = 0; i < no_studs - 1; i ++)
	{
		for (int j = i + 1; j < no_studs; j ++)
		{
			if (strcmp(arr[i] -> id, arr[j] -> id) > 0)
			{
				STUD *temp;

				temp = arr[i];
				arr[i] = arr[j];
	
				arr[j] = temp;
	
			}
		}
	}

	return arr;	
	
}



void main()
{
	int no_studs;
	
	scanf(" %d", &no_studs);

	getchar();
	STUD *arr = malloc(sizeof(STUD) * no_studs);
	STUD *ptr_arr[no_studs];

	for (int i = 0; i < no_studs; i ++)
	{
		ptr_arr[i] = &arr[i];
	}


	populate(arr, no_studs);

	store_email(arr, no_studs);

	print_rec(arr, no_studs);

	STUD *new = sort_id(ptr_arr, no_studs);

	for (int i = 0; i < no_studs; i ++)
	{
		printf("%s \n", new[i].id);
	}

	print_rec(arr, no_studs);

	printf(" \n%f ", calc_avg_cg(arr, no_studs));

}






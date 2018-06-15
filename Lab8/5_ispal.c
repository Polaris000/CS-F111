#include <stdio.h>
#include <string.h>

int ispal_1(char *);
int ispal_2(char *);
int ispal_3(char *);
void strrev(char *);


void main()
{
	char s[] = "abcbad";

	char t[] = "jkj";

//	int s_1 = ispal_1(s);
//	int s_2 = ispal_2(s);
	int s_3 = ispal_3(s);
//	int t_1 = ispal_1(t);
//	int t_2 = ispal_2(t);
//	int t_3 = ispal_3(t);
	
	// o: 0 -- palindrome
	// o: !0 -- not a palindrome
//	printf("%d %d \n", s_1, t_1);
//	printf("%d %d \n", s_2, t_2);
//	printf("%d %d \n", s_3, t_3);
}



int ispal_1(char a[])
{
	int size = strlen(a);
	char temp[size + 1];
	
	temp[size] = 0; // important: otherwise unexpected results can be expected
			// the array temp is not deleted before another function call..
			// The same region of memory is allocated
			// The 0 is necessary to terminate the array and not return any 
			// garbage values

	for (int i = 0; i <  size; i += 1)
		{
			temp[size - 1 - i] = a[i];
		}	

	return strcmp(a, temp);
}


int ispal_2(char *a)
{

	char *temp;

	for (int i = 0; i < strlen(a); i += 1)
	{
		*(temp + i) = (a[strlen(a) - 1 - i]);		
	}

	// necessary.. as mentioned in ispal_3().
	*(temp + strlen(a)) = 0;
	
	
	return strcmp(a, temp);
}

int ispal_3(char *a)
{
	char *tempi=a;
	
	// if a for loop is not used, modifying temp will modify a -- passed by reference	
	for (int i = 0; i < strlen(a); i += 1)
        {
                (temp + i) = (a[i]);
		// passed by value
        }


	// don't assign to var.. void func
	strrev(temp);
		
	return strcmp(a, temp);
}


void strrev(char *a) /* function to reverse the given string */
{

  	char *b, temp;
  	b = a + strlen(a) - 1;	/* b is made to the last character preceding 
				the terminating \0 */
  	for (  ; a < b ; a++, b--)		
 	{			/* swapping the contents pointed to by a and b */
    		temp = *a;
    	  	*a = *b;
    	  	*b = temp;
    	}


  	return;
}


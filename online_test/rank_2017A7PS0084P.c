		//	ID. No.: 2017A7PS0084P
		//	Name:ANIRUDDHA JAYANT KARAJGI
		//	Set (A or B):B
			
#include <stdio.h>
#include <string.h>

typedef struct record {
	char name[70];
	char idno[16];
	float compre;
	int rank;
  } STUD;

void readData(STUD a[], int max)
{
  FILE *fp;
  /* Your code goes here....
  */

	fp = fopen("rank_data.txt", "r");
	
	if (!fp)
	{
		printf("error");
	}

	for (int i = 0; i < max; i ++)
	{
		fscanf(fp, "%s,%s,%f", a[i].idno, a[i].name, &a[i].compre);
	}


	

  fclose(fp);
  return;
}


void storeRanks(STUD a[], int max)
{

  /* Your code goes here....
	...
	...

  */
	FILE *f2 = NULL;

	f2 = fopen("rank_output.txt", "w");


	for (int i = 0; i < max - 1; i ++)
	{
		for (int j = i; j < max; j ++)
		{
			if (a[i].compre < a[j].compre)
			{
				STUD temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	 for (int i = 0; i < max; i ++)
        {
                fprintf(f2, "%s \t %s \t %f \t %d \t", a[i].idno, a[i].name, a[i].compre, a[i].rank);
        }

	

	for (int i = 0; i < max; i ++)
	{

	int j = 0;
	
	float max_score = a[i].compre;

	while (a[j].compre == max_score)
	{
		a[j].rank = i + 1;
		j ++;
	}

	
	}


	fprintf(f2, "ID \t name \t compre_score \t rank \n \n");
	
	for (int i = 0; i < max; i ++)
	{
		fprintf(f2, "%s \t %s \t %f \t %d \t", a[i].idno, a[i].name, a[i].compre, a[i].rank);
	}
	
	
  return;
}

void displayData(STUD a[], int max)
{
  int i;
  for (i = 0; i < max; ++i)
    printf("%18s %20s\t %.2f %d\n", a[i].idno, a[i].name, a[i].compre, a[i].rank);
  return;
}

int main()
{
  int maxelems;
  scanf("%d", &maxelems); // keyboard input for number of students to be ranked
  STUD arr[maxelems];
  readData(arr,maxelems);	// populates the array of structures
  storeRanks(arr,maxelems);	// computes rank of each student and stores in the record
  displayData(arr,maxelems);
  return 0;
}

		// ID NO.: 2017A7PS0084P
		// NAME: ANIRUDDHA JAYANT KARAJGI
		// SET (A or B): B


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct id NODE;
typedef struct id {
	char uid[13];
	NODE *next;
	} NODE;	

NODE *createNode(char *);
NODE *insertNode(NODE *, char *);
void printListAndMin(NODE *);
int isFound(NODE *, char *); // checks if the given Aadhaar number is already there in the linked list; returns 1 if found, and 0 otherwise
char *strfry(char *);	// already defined in the library

int main(int argc, char *argv[])
{
  NODE *h;
  char aadhaar[13];  // line 25
  int N, count = 1;
  
/* write a line of code (line 29) that stores the Aadhaar number (from user) in the array called aadhaar declared in line 25 */
   strcpy(aadhaar, argv[1]);             // <<<<<<<<<< line 29; your code goes here

/* write a single line of code below that gets the value of N already given by user earlier */
  N = atoi(argv[2]);                    // <<<<<<<<<< line 32; your code goes here
  if (N == 0) return 0;

  while (count <= N)
   {
     do		/* continues till a "valid" Aadhaar number is generated */ 
       {
		; // <<<<<<<<< your statement goes here
		strcpy(aadhaar, strfry(aadhaar); // <<<<<<<<< your statement goes here
			
       } while (aadhaar[0] == '0' || aadhaar[0] == '1');
     count++;	
     if (isFound(h, aadhaar)	/* you have to write the condition here */ ) // <<<<<<<<<
	break;	// same as original Aadhaar!	
     else 
	if ( /* you have to write another condition here*/ ) // <<<<<<<<<
	  h = insertNode(h,aadhaar);
  } 
  printListAndMin(h);
}

NODE *createNode(char *str)
{
  NODE *new;
  new = malloc (sizeof(NODE));
  strcpy(new->uid, str);
  new -> next = NULL;
  return new;
}

NODE *insertNode(NODE *h, char *str) 
{
  if (h == NULL) /* first node */
  {
    h = createNode(str);
    return h;
  }
  NODE *cpy = h;
  while (h -> next)
    h = h -> next;
  h -> next = createNode(str);
  return cpy;
}

void printListAndMin(NODE *h)
{
  int counter = 1;
  if (!h) return;
  
  NODE *tmp = h;
 
  while (h)	/* prints all the numbers of the list */
  {
    printf("Node no. %d: ", counter); 
    counter++;
    printf("%s\n", h->uid);
    h = h -> next;
  }
       /* your code for printing out the minimum Aadhaar number goes here..
	*/

	h = tmp;
	long min = (long)atoi(h -> uid);

	while (h)
	{
		if (min > h -> uid)
		{
			min = h -> uid;
		}

		h = h -> next;
	}	

	printf("%ld", min);

  return;
}

int isFound(NODE *h, char *s)
{
  while (h)
  {
	if (!strcmp(h->uid, s))
	  return 1;
	h = h -> next;
  }
  return 0;
}

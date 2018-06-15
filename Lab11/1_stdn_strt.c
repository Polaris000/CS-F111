#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct student
{
	char name[20];
	char id[14];
	int age;
	float cgpa;
} 
s1;

void change_data(struct student s);
void disp(struct student s);


void main()
{
	struct student s2, s3;

	printf("%ld \n", sizeof(s1));

	scanf(" %d", &s1.age);
	scanf(" %s", s1.name);
	scanf(" %s", s1.id);
	scanf(" %f", &s1.cgpa);

	scanf(" %d ", &s2.age);
        scanf(" %s ", s2.name);
        scanf(" %s ", s2.id);
        scanf(" %f", &s2.cgpa);

	disp(s1);

	s3 = s1;

	if (s2.age == s3.age && strcmp(s2.name, s3.name) && strcmp(s2.id, s3.id) && s2.cgpa == s3.cgpa)
		printf("True");

	change_data(s1);
	disp(s1);
	// passed by value


	printf(" \n %p", &s3);
	printf("%p \n", &s3.name);
	printf("%p \n", &s3.age);
	printf("%p \n", &s3.id);
	printf("%p \n", &s3.cgpa);
	
	
	struct student *s3_;
	s3_ = &s3;

	printf("%p", s3_);
}


void change_data(struct student s)
{
	strcpy(s.name,"Madhav");
	s.age = 20;
	s.cgpa = 7.33;

}

void disp(struct student s)
{
	printf(" %d ", s.age);
        printf(" %s ", s.name);
        printf(" %s ", s.id);
        printf(" %f", s.cgpa);

}

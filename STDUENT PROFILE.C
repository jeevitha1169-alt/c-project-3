#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
char name[30];
int id;
int marks;
int age;
char city[30];
char ambition[50];
};

void main()
{
struct student s[10];
int i,choice,search,found;
clrscr();
printf("aim: ");
printf("To store and manage student records.");
printf("Student record management\n");
for(i=0 ; i<10 ;i++)
{
 printf("\nEnter student details %d\n",i+1);
 printf("enter name: ");
 scanf("%s",&s[i].name);
 printf("enter id: ");
 scanf("%d",&s[i].id);
 printf("enter marks: ");
 scanf("%d",&s[i].marks);
 printf("enter age: ");
 scanf("%d",&s[i].age);
 printf("enter city: ");
 scanf("%s",&s[i].city);
 printf("enter ambition:");
 scanf("%s",&s[i].ambition);
 }
 printf("\n\n1.Display all students");
 printf("\n\n2.Search student by id");
 printf("\n3.Exit");
 printf("\n Enter your choice");
 scanf ("%d",&choice);
 switch (choice)
 {
 case 1:
 for(i=0 ;i<10 ;i++)
 {
 printf("\n name: %s",s[i].name);
 printf("\n marks: %d",s[i].marks);
 printf("\n city: %s",s[i].city);
 printf("\n age: %d",s[i].age);
 printf("\n ambition: %s",s[i].ambition);

 if
   (s[i].marks >=90)
   printf("Grade A+ \n");
 else if
   (s[i].marks >=80)
   printf("Grade: A \n");
 else if
   (s[i].marks >=70)
   printf("Grade: B \n");
 else if
   (s[i].marks >=60)
   printf("Grade: C \n");
 else if
   (s[i].marks >=50)
   printf("Grade: D \n");
 else
   printf("Failed \n");
   }
   break;

 case 2:
   printf("n\Enter student id to search: ");
   scanf("%d",&search);

   found = 0;

   for(i=0 ; i<10 ;i++)
   {
   if(s[i].id == search);
   {
   printf("\n Student found!");
   printf("\n name: %s",s[i].name);
   printf("\n city: %s",s[i].city);
   printf("\n id :  %d",s[i].id);
   printf("\n age:  %d",s[i].age);
   printf("\n aim:  %s",s[i].ambition);

   if (s[i].marks >=90)
   printf("Grade: A+\n");
   else if (s[i].marks >=80)
   printf("Grade: A \n");
   else if (s[i].marks >=70)
   printf("Grade: B \n");
   else if (s[i].marks >=60)
   printf("Grade: C \n");
   else if (s[i].marks >=50)
   printf("Grade: D \n");
   else
   printf("Failed\n");

   found = 1;
   break;
   }
 }
 if (found == 0)
 printf("Student id not found!");

 break;

 case 3:
 printf("The student profile is verified");
 break;

 default:
 printf("\nInvalid choice! please enter 1,2 or 3");
 }
 while (choice != 3)
 getch();

 }












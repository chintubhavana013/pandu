#include<stdio.h>
#include<string.h>
union student{
	int rno;
	char name[50];
	int marks[5];
	int total;
};
int main()
{
 union student s;
 int temp_marks[5],total=0;
 int i;
     printf("enter roll number:");
     scanf("%d",&s.rno);
	 printf("roll number: %d\n",s.rno);
	 printf("enter name: ");
  	 scanf("%s",&s.name);
 	 printf("name: %s\n",s.name);
 	 printf("enter marks: ");
 	 for (i=0;i<5;i++){
 	 	printf("\nsubject %d:",i+1);
 	 	scanf("%d",&temp_marks[i]);
 	 	total+= temp_marks[i];
 	 
	  }
	printf("MARKS: ");
	for(i=0;i<5;i++){
		printf("%d",temp_marks[i]);
	}
	s.total=total;
	printf("\n total : %d\n",s.total);
	return 0;

}

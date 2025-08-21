#include<stdio.h>
struct student{
	
    int rno;
    char name[50];
    int marks[5];
    int total;
	
};
int main()
{
    struct student s;
    s.total=0;
    int i=0;
    
     printf("enter roll number:");
     scanf("%d",&s.rno);
     
	 printf("enter name: ");
  	 scanf("%s",&s.name);
  	 
 	 for (i=0;i<5;i++)
	  {
 	 	printf("\nenter marks for subject %d:",i+1);
 	 	scanf("%d",&s.marks[i]);
 	 	s.total+=s.marks[i];
 	 
	  } 
	  
	  
	printf("\n******STUDENT DETAIL(using structures)******\n");
	printf("roll number:%d\n",s.rno);
	printf("name :%s\n",s.name);
	printf("MARKS: ");
	
	for(i=0;i<5;i++)
	{
		printf("%d",s.marks[i]);
	}
	
	printf("\ntotal:%d\n",s.total);
	getch();
	return 0;
	

	
	
}

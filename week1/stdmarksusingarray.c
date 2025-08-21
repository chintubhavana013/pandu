#include<stdio.h>
int main()
{
    int rno;
    char name[50];
    int marks[50],total=0;
    int i;
    
    
     printf("enter roll number:");
     scanf("%d",&rno);
	 printf("enter name");
  	 scanf("%s",&name);
 	 for (i=0;i<5;i++){
 	 	printf("\nenter marks for subject %d:",i+1);
 	 	scanf("%d",&marks[i]);
 	 	total+=marks[i];
 	 
	  } 
	  
	  
	printf("\n******STUDENT DETAIL(using array)******\n");
	printf("roll number:%d\n",rno);
	printf("name :%s\n",name);
	printf("MARKS: ");
	for(i=0;i<5;i++){
		printf("%d",marks[i]);
	}
	
	printf("\ntotal:%d\n",total);
	return 0;
	

	
	
}

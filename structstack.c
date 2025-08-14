#include <stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
struct stack*push(struct stack *top,int val)
{

	struct stack *ptr = malloc(sizeof(struct stack));
	ptr->data= val;
	ptr->next = top;
	top=ptr;
	return top;
}
struct stack *pop(struct stack*top){

	struct stack *ptr=top;
	if(top==NULL)
	{
		printf("\n stack underflow");
	}
	else
	{
		top=top->next;
		printf("\n the value being deleted is: %d",ptr->data);
		free(ptr);
	}
	return top;
	
}
int peek (struct stack *top)
{
	return (top==NULL)? -1:top->data;
}
struct stack *display(struct stack *top)
{
struct stack *ptr=top;
if(top ==NULL)
{
	printf("\n stack is empty");
}
else 
{
	while(ptr!= NULL){
		printf("\n%d",ptr->data);
		ptr=ptr->next;
	}
}
return top;
}
int main()
{
	int val,option;
	do{
		printf("!!!! MAIN MANU !!!!");
		printf("\n 1. PUSH");
		printf("\n 2. POP");
		printf("\n 3. PEEK");
		printf("\n 4. DISPLAY");
		printf("\n 5. EXIT");
		printf("\n ENTER YOUR OPTION:");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("\n enter the number to be pushed on stack:");
				scanf("%d",&val);
				top=push(top,val);
				break;
			case 2:
				
				top=pop(top);
				break;
			case 3:
				val= peek(top);
				if (val!= -1)
				printf("\n the value at the top of stack is %d",val);
				else
				printf("\n STACK IS EMPTY");
				break;
			case 4:
			top=display(top);
			break;
				
		}
		
	}while (option!=5);
	return 0;
	
}





















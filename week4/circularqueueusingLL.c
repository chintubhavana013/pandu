#include<stdio.h>
#define MAX 4


 int queue[MAX];
 int front= -1,rear = -1;
 
 int isfull()
 {
 		if((front == 0 && rear == MAX-1)||(rear+1 == front))
 		   return 1; 	
 	return 0;
 } 
 
 int isempty()
 {
 	 	if(front == -1)
 	 	return 1;
 	return 0;
 }
 
 void insert()
 {
 		int num;
 		printf("\n enter the number to be inserted in the queue :");
 		scanf("%d",&num);
 			
 			if(isfull())
 			{
 				printf("\noverflow");
 				return;
			 }
			if(isempty())
			{
				front = rear =0;
			}
			else if(rear == MAX-1 && front != 0)
 	  		{
 	  			rear =0;
 	  	    }
 	  	    else
			{
 	  	    	rear++;
 	  	    }
 			queue[rear] =num;
 }
 int delete_element()
 {
 		int val;
 		
 		if(isempty())
		 {
 			 printf("\n underflow");
 			 return -1;
 		 }
 	val = queue[front];
 	 if(front == rear)
	  {
 	 	front =rear = -1;
 	  }
 	 else if(front == MAX -1)
	  {
 	 	front =0;
 	  }
 	 else
	  {
 	 	front++;
      }
      return val;
 }
 
 int peek()
 {
 	if(isempty())
	 {
	 	printf("\nqueue is empty");
	 	return -1;
	 }
	 else
	 {
	 	return queue[front];
	 }
 }
 
 void display()
 {
 	int i;
	 
	  if(isempty())
	  { 
	     printf("\nqueue is empty");
	     return;
	  }	
 	  
 	  printf("\n queue elements are :");
       
       if(front<= rear)
       { 
         for(i=1;i<=rear;i++)
          printf("\t%d", queue[i]);
	   }
 		else
 		{
 			for(i = front;i<MAX; i++)
 			    printf("\t%d", queue[i]);
 			      
 			      for(i=0;i<=rear;i++)
 			         printf("\t%d", queue[i]);
		 }

 }

int main()
{
	int option,val;
	
	do
	{
		printf("\n ***** MAIN MENU *****");
		printf("\n 1. Insert an element");
		printf("\n 2. Delete an element");
		printf("\n 3. Peek");
		printf("\n 4. Display the queue");
		printf("\n 5. EXIT");
		printf("\n Enter your option : ");
		scanf("%d", &option);
		
		
		switch(option)
		{
			case 1:
				insert();
			     break;
			case 2:
				val = delete_element();
				if(val != -1)
				 printf("\n the number deleted id : %d",val);
				 break;
			case 3:
				val = peek();
				if(val != -1)
				printf("\n the first value in queue is :%d", val);
			case 4:
				display();
				break;
			
		}
		
	}
	
	while(option != 5);
	
	return 0;

	
}
 

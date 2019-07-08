#include<stdio.h>
#include<stdlib.h>
#define max 5
int Q[max];
int front;
int rear;
void insert()
{
	int num;
	if((front==0 && rear==max-1)||(rear+1==front))
	 printf("\n Overflow");
	else
	{
		printf("\n Enter the number ");
		scanf("%d",&num);
		if(rear==-1)
		{
			front=0;
			rear=0;
			Q[rear]=num;
		}
		else
		{
			rear=(rear+1)%max;
			Q[rear]=num;
		}
	}
}
void Delete()
{
	if(front==-1)
	 printf("\n Underflow");
	else
	{
		printf("\n Deleted %d",Q[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		 front=(front+1)%max;
	}
}
void display()
{
	int i;
	if(front==-1)
	 printf("\n Nothing to display");
	else
	{
		if(front<=rear)
		{
		for(i=front;i<=rear;i++)
		 printf("\n %d",Q[i]);
	    }
	    else
	    {
	    for(i=front;i<max;i++)
		 printf("\n %d",Q[i]);
		for(i=0;i<=rear;i++)
		 printf("\n %d",Q[i]);
		}
	}
}

void main()
{
	int ch;
	front=-1;
	rear=-1;
	while(1)
	{
		printf("\n 1 for Insert ");
		printf("\n 2 for Delete ");
		printf("\n 3 for Display ");
		printf("\n 4 for Exit ");
		printf("\n Enter the choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				Delete()	;
				break;
				
			case 3:
				display();
				break;
			case 4:
			exit(1)		;
			
			default:
				printf("\n Wrong choice ");
		}
	}
}

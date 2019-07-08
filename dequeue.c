#include<stdio.h>
#include<stdlib.h>
#define max 5
int Q[max];
int front;
int rear;
void insertrear()
{
	int num;
	if(rear==max-1)
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
			Q[++rear]=num;
		}
	}
}
void insertfront()
{
	int num;
	if(front==0)
	 printf("\n Overflow");
	else
	{
		printf("\n Enter the number ");
		scanf("%d",&num);
		if(front==-1)
		{
			front=0;
			rear=0;
			Q[front]=num;
		}
		else
		{
			Q[--front]=num;
		}
	}
}
void Deletefront()
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
		 front++;
	}
}
void Deleterear()
{
	if(rear==-1)
	 printf("\n Underflow");
	else
	{
		printf("\n Deleted %d",Q[rear]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		 rear--;
	}
}
void display()
{
	int i;
	if(front==-1)
	 printf("\n Nothing to display");
	else
	{
		for(i=front;i<=rear;i++)
		 printf("\n %d",Q[i]);
	}
}

void main()
{
	int ch;
	front=-1;
	rear=-1;
	while(1)
	{
		printf("\n 1 for Insert Front ");
		printf("\n 2 for Insert  Rear");
		printf("\n 3 for Delete Front ");
		printf("\n 4 for Delete Rear");
		printf("\n 5 for Display ");
		printf("\n 6 for Exit ");
		printf("\n Enter the choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				insertfront();
				break;
			case 2: 
				insertrear();
				break;
			case 3:
				Deletefront()	;
				break;
			case 4:
			    Deleterear();
				break;	
			case 5:
				display();
				break;
			case 6:
			exit(1)		;
			
			default:
				printf("\n Wrong choice ");
		}
	}
}

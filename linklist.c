#include<stdio.h>
#include<stdlib.h>
typedef struct linklist
{
	int data;
	struct linklist *link;
}node;


node * insertFirst(node *s)
{
	 node *temp;
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter the data ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(s==NULL)
	 s=temp;
	else
	{
		temp->link=s;
		s=temp;
	}
	return s;
}
node * insertLast(node *s)
{
	 node *temp,*ptr;
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter the data ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(s==NULL)
	 s=temp;
	else
	{
		ptr=s;
		while(ptr->link!=NULL)
		 ptr=ptr->link;
		 
		ptr->link=temp;
	}
	return s;
}

node * insertSearch(node *s)
{
	 node *temp,*ptr;
	 int num;
	
	if(s==NULL)
	 printf("\n List is Empty");
    else
    {
    	printf("Enter the search data ");
    	scanf("%d",&num);
    	ptr=s;
    	while(ptr!=NULL)
    	{
    		if(ptr->data==num)
    		{
    			temp=(node*)malloc(sizeof(node));
				printf("\nEnter the data ");
				scanf("%d",&temp->data);
				temp->link=NULL;
				
				temp->link=ptr->link;
				ptr->link=temp;
				break;
	
			}
			ptr=ptr->link;
		}
    	if(ptr==NULL)
    	 printf("\n Not Found ");
    	return s;
	}
}
node * deleteFirst(node *s)
{	
	if(s==NULL)
	 printf("\n underflow");
	else
	{
		printf("\n Deleted %d",s->data);
		s=s->link;
	}
	return s;
}
node * deleteLast(node *s)
{	
	node *ptr;
	if(s==NULL)
	 printf("\n underflow");
	else if(s->link==NULL)
	{
		printf("\n Deleted %d",s->data);
		s=NULL;
	}
	else
	{
		ptr=s;
		while(ptr->link->link!=NULL)
		 ptr=ptr->link;
		 
		ptr->link=NULL; 
	}
	return s;
}

node * deleteSearch(node *s)
{
	 node *temp,*ptr;
	 int num;
	
	if(s==NULL)
	 printf("\n List is Empty");
	
    else
    {
    	printf("Enter the search data ");
    	scanf("%d",&num);
    	if(s->data==num)
    	 s=s->link;
    	else
    	{
    	ptr=s;
    	while(ptr!=NULL)
    	{
    		if(ptr->link->data==num)
    		{
    			ptr->link=ptr->link->link;
				break;
			}
			ptr=ptr->link;
		}
    	if(ptr==NULL)
    	 printf("\n Not Found ");
    	}
     }
     return s;
}
void display(node *s)
{
	node *ptr;
	if(s==NULL)
	 printf("\n List is Empty");
	else
	{
		ptr=s;
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->link;
		}
		
	}
}
void main()
{
	int ch;
	node *start;
	start=NULL;
	while(1){
	printf("\n Press 1 for Insert First ");
	printf("\n Press 2 for Insert Last ");
	printf("\n Press 3 for Search Insert ");
	printf("\n Press 4 for Delete First ");
	printf("\n Press 5 for Delete Last ");
	printf("\n Press 6 for Search Delete ");
	printf("\n Press 7 for Display ");
	printf("\n Press 8 for Exit ");
	printf("\n Enter the choice ")	;
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		start=insertFirst(start);
		break;
		
		case 2:
		start=insertLast(start);
		break;	
		
		case 3:
		start=insertSearch(start);
		break;	
		
		case 4:
		start=deleteFirst(start);
		break;
		
		case 5:
		start=deleteLast(start);
		break;	
		
		case 6:
		start=deleteSearch(start);
		break;	
		
		case 7:
			display(start);
			break;
			
		case 8:
			exit(1);
		default:
			printf("\n Wrong choice ");
		}
	}
}












#include<stdio.h>
#include<stdlib.h>
typedef struct linklist
{
	int data;
	struct linklist *llink;
	struct linklist *rlink;
}node;
node *start,*temp,*ptr;
void insertFirst()
{
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter the data ");
	scanf("%d",&temp->data);
	temp->llink=NULL;
	temp->rlink=NULL;
	
	if(start==NULL)
		start=temp;
	else
	{
		temp->rlink=start;
		start->llink=temp;
		start=temp;
	}
}
void insertLast()
{
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter the data ");
	scanf("%d",&temp->data);
	temp->llink=NULL;
	temp->rlink=NULL;
	
	if(start==NULL)
		start=temp;
	else
	{
		ptr=start;
		while(ptr->rlink!=NULL)
		 ptr=ptr->rlink;
		 
		ptr->rlink=temp;
		temp->llink=ptr;
	}
}
void deleteFirst()
{
	if(start==NULL)
	 printf("\n List is empty");
	else if(start->rlink==NULL)
	 start=NULL;
	else
	{
		temp=start;
		start=start->rlink;
		start->llink=NULL;
		temp->rlink=NULL;
		free(temp);
	}
}
void deleteLast()
{
	if(start==NULL)
	 printf("\n List is empty");
	else if(start->rlink==NULL)
	 start=NULL;
	else
	{
		ptr=start;
		while(ptr->rlink->rlink!=NULL)
		 ptr=ptr->rlink;
		 
		ptr->rlink=NULL;
	}
}
void display()
{
	if(start==NULL)
	 printf("\n List is empty");
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->rlink;
		}
	}
}
void searchInsert()
{
	int num;
	if(start==NULL)
	 printf("\n List is empty");
	else
	{
		printf("\n Enter the search number ");
		scanf("%d",&num);
		ptr=start;
		while(ptr!=NULL)
		{
			if(ptr->data==num)
			{
				temp=(node*)malloc(sizeof(node));
				printf("\nEnter the data ");
				scanf("%d",&temp->data);
				
				temp->rlink=ptr->rlink;
				temp->llink=ptr;
				ptr->rlink->llink=temp;
				ptr->rlink=temp;
				break;
				
			}
			ptr=ptr->rlink;
		}
		if(ptr==NULL)
		 printf("\n Number not present ");
	}
}
void searchDelete()
{
	int num;
	if(start==NULL)
	 printf("\n List is empty");
	else
	{
		printf("\n Enter the search number ");
		scanf("%d",&num);
		if(start->rlink==NULL && start->data==num)
		 start=NULL;
		else
		{
		ptr=start;
		while(ptr!=NULL)
		{
			if(ptr->data==num)
			{
				ptr->llink->rlink=ptr->rlink;
				ptr->rlink->llink=ptr->llink;
				break;
				
			}
			ptr=ptr->rlink;
		}
		if(ptr==NULL)
		 printf("\n Number not present ");
	   }  
	 }
}
void count()
{
	int c=0;
	if(start==NULL)
	 printf("\n List is empty");
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
		    c++;
			ptr=ptr->rlink;
		}
		printf("\n No. of nodes %d",c);
	}
}

void main()
{
	int ch;
	start=NULL;
	while(1)
	{
	printf("\n 1 for Insert First ");
	printf("\n 2 for Insert Last ");
	printf("\n 3 for Delete First ");
	printf("\n 4 for Delete Last ");
	printf("\n 5 for Search Insert ");
	printf("\n 6 for Search Delete ");
	printf("\n 7 for Display ");
	printf("\n 8 for Count ");
	printf("\n 9 for Exit ");
	printf("\n Enter the choice ");
	scanf("%d",&ch);   
	
	switch(ch)
	{
		case 1:
			insertFirst();
			display();
			break;
			
		case 2:
			insertLast();
			display();
			break;
			
		case 3:
			deleteFirst();
			display();
			break;
			
		case 4:
			deleteLast();
			display();
			break;
		case 5:
			searchInsert();
			display();
			break;
		
		case 6:
			searchDelete();
			display();
			break;
			
		case 7:
			display();
			break;				
		case 8:
		    count();
		    break;
		    
			case 9:
				exit(1);
	 }
    }
}

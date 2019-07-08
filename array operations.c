#include<stdio.h>
#define MAX 50
void display(int[], int);
void insert(int [], int*);
void Delete(int [], int *);
void search(int[], int);
void main()
{
	int a[MAX];
	int n,i,ch;
	printf("\nEnter the No of elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)//accept number from user
	{
		printf("\nEnter the number ");
		scanf("%d",&a[i]);
	}
	do{
	printf("\n\t M E  N U");
	printf("\n\t 1 for Insert ");
	printf("\n\t 2 for Delete ");
	printf("\n\t 3 for Display");
	printf("\n\t 4 for Search");
	printf("\n\t 5 for Exit ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insert(a,&n);
			break;
			
		case 2:
		Delete(a,&n);
		case 3:
			display(a,n);// function call
			break;
		case 4:
			search(a,n);
			break;
		case 5:
			break;
		default:
			printf("\n\tOops! wrong choice");
	}
  }while(ch!=5);
}
void display(int a[], int n)
{
	int i;
	printf("\n Array elements ");
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);
	 
	 printf("\n");
}
void insert(int a[], int *p)
{
	int num,pos,i;
	printf("\nEnter the Number ");
	scanf("%d",&num);
	printf("\nEnter the position ");
	scanf("%d",&pos);
	
	for(i=*p-1;i>=pos;i--)
	 a[i+1]=a[i];// shifting
	 
	a[pos]=num; // place the number 
	*p=*p+1;//  increment size of array
}
void Delete(int a[], int *p)
{
	int pos,i;
	printf("\nEnter the position ");
	scanf("%d",&pos);
	
	for(i=pos;i<*p-1;i++)
	 a[i]=a[i+1];// shifting
	 
	*p=*p-1;//  decrement size of array
}
void search(int a[], int n)
{
	
	int i,num;
	printf("\n\t Enter the search number ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		 break;
	}
	if(i==n) 
	 printf("\n\tnumber not present ");
	else
	 printf("\n\tnumber present at index %d",i);
}

#include<stdio.h>
#include<stdlib.h>
int search(int [], int, int, int);
void main()
{
	int *a,n,i,num,k;
	printf("\nEnter the order ");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter No.");
		scanf("%d",&a[i]);
	}
	printf("\nEnter the search number ");
	scanf("%d",&num);
	k=search(a,0,n-1,num);
	if(k==-1)
	 printf("Number not present");
	else
	 printf("\n Number present at index %d",k);
	
}
int search(int a[], int ind, int l, int snum)
{
	if(ind>l)
	 return -1;
	else if(a[ind]==snum)
	 return ind;
	else
	 return search(a,ind+1,l,snum);
}

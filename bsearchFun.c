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
int search(int a[], int f, int l, int snum)
{
	int m=(f+l)/2;
	if(f>l)
	 return -1;
	 
	else if(a[m]==snum)
	 return m;
	else if(snum>a[m])
	 return search(a,m+1,l,snum);
	else
	 return search(a,f,m-1,snum);
}

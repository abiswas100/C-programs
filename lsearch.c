#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *a,n,i,num,f=0;
	printf("\nEnter the limit ");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d No. ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the search number ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	 printf("\n Number present at index %d",i);
	else
	 printf("\n Number not present");
}

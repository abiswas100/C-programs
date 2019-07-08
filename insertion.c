#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *a,n,i,j,t;
	printf("\nEnter the limit ");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d No. ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)// for pass
	{
		t=a[i];
		j=i-1;
		while(j>=0 && t<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);	
} 

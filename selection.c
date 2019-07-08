#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *a,n,i,j,t,m,p;
	printf("\nEnter the limit ");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d No. ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)// for pass
	{
		m=a[i];
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<m)
			{
				m=a[j];
				p=j;
			}
		}
		t=a[i];
		a[i]=a[p];
		a[p]=t;
	}
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);	
} 

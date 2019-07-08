#include<stdio.h>
#include<stdlib.h>
void merge(int [], int, int);
void sort(int [], int , int , int);
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
	merge(a,0,n-1);
	printf("\n number after sort");
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);
	
	
}
void merge(int a[], int f, int l)
{
	int m=(f+l)/2;
	if(f<l)
	{
		merge(a,0,m);
		merge(a,m+1,l);
		sort(a,f,m,l);
	}
		
}

void sort(int a[], int f, int m , int l)
{
	
	int i=f,j=m+1,temp[100],k=f,x;
	while(i<=m && j<=l)
	{
		if(a[i]<a[j])
		 temp[k++]=a[i++];
		else if(a[j]<a[i])
		 temp[k++]=a[j++];
		else
		{
			temp[k++]=a[i++];
			temp[k++]=a[j++];
		}
	}
	if(i>m)
	{
		for(x=j;x<=l;x++)
		 temp[k++]=a[x];
	}
	else
	 {
		for(x=i;x<=m;x++)
		 temp[k++]=a[x];
	}
	for(i=f;i<=l;i++)
	 a[i]=temp[i];
}


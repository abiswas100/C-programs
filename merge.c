#include<stdio.h>
void sort(int a[], int f, int m, int l)
{
	int temp[10];
	int i=f,j=m+1,k=f,x;
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
void merge(int a[], int f, int l)
{
	int m;
	if(f<l)
	{
		m=(f+l)/2;	
		merge(a,0,m);
		merge(a,m+1,l);
		sort(a,f,m,l);
	}
}
void main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("Enter No. ");
		scanf("%d",&a[i]);
	}
	printf("\n Before sorting ");
	for(i=0;i<10;i++)
	 printf(" %d",a[i]);
	 
	 merge(a,0,9);
	 
	printf("\n After sorting ");
	for(i=0;i<10;i++)
	 printf(" %d",a[i]);
	
}

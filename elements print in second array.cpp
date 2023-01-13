#include<stdio.h>
int main()
{
	int n,temp,i;
	printf("enter size of an array = ");
	scanf("%d",&n);
	int a[n],b[100];
	
	printf("enter %d elements in array = ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	for(i=0;i<n;i++)
	{
	 printf("elements in second array [%d] = %d\n",i,b[i]);
		
	}
	
}

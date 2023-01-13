#include<stdio.h>
int main()
{
	int a[100];
	int n,i,c=0,j,temp;
	printf("enter size of an array =  ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter elements in array = ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	
	for(i=0;i<n;i++)
	{
		printf("elements in ascending order = %d\n",a[i]);
	}
}

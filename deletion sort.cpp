#include<stdio.h>
int main()
{
	int a[100],n,i,pos;
	printf("enter size of an array = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elements in array [%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("enter position of number for delete = ");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("after deleting the number [%d] = %d\n",i,a[i]);
	}
}

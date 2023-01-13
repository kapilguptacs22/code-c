#include<stdio.h>
int main()
{
	int a[100];
	int n,pos,value,i,num;
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter value for insert: ");
	scanf("%d",&value);
	printf("enter position of value: ");
	scanf("%d",&pos);
	
	for(i=n-1;i>pos-1;i--)
	{
	 a[i+1]=a[i];	
	
	
	n++;
}a[pos]=value;
	for(i=0;i<n-1;i++)
	{
		printf("after inserting value %d = %d\n",i,a[i]);
	}
	return 0;
}

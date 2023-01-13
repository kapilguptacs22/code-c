#include<stdio.h>
int main()
{
	int a[100];
	int value,pos,n,i;
	printf("enter size of an array = ");
	scanf("%d",&n);
	printf("enter %d elements in array ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position where you want to insert the element = ");
	scanf("%d",&pos);
	printf("enter the value into that position = ");
	scanf("%d",&value);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
		
	}
	
	printf("after inserting :");
	for(i=0;i<=n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

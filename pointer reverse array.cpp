#include<stdio.h>
int main()
{
	int arr[10],n=10,i;
	int *p=arr;
	for(i=0;i<n;i++)
	{
	printf("enter array: ");
	scanf("%d",&p);
	
}
for(i=0;i<n;i++)
{
	printf("%d",*(p+i));
}
}

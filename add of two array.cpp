#include<stdio.h>
int main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100],n;
	printf("enter size of an array = ");
	scanf("%d",&n);
	printf("\n enter elements in b array %dx%d = \n",n,n);
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter elements in b array %dx%d= \n",n,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf(" two arrays A+B\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\n",c[i][j]);
		}
		
	}
	
}

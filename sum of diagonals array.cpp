#include<stdio.h>
int main()
{
    int c=0,sum=0,i,j,n;
	printf("enter size of an array:");
	scanf("%d",&n);
	int a[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter number ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
	 sum = sum+a[i][i];
	}
	printf("sum is = %d",sum);
	return 0;
}

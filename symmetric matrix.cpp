#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter size of an array: ");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j] = a[j][i];
		}
	}
int	symetric =1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				symetric=0;
				break;
			}
			
		}
		
		
	}
	if(symetric ==1)
	{
		printf("the given matrix is symmetric matrix\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("not symmetric\n");
	}
	return 0;
}


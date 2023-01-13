#include<stdio.h>
void sum();
void bubble();
int main()
{
	bubble();
	
}
void sum()
{
	int a,b,c;
	printf("enter two nmber: ");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("%d",c);
}
void bubble()
{
	int i,j,temp,n;
    int	a[]={22,33,11,44,1,2,4,5};
    n=8;
    printf("original array\n");
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
    printf("\nafter sorting\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

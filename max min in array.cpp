#include<stdio.h>
int main()
{
	int a[100],n,i,max,min;
	printf("enter size of an array = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
     printf("enter elements in array = ");
     scanf("%d",&a[i]);	
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max){
		max=a[i];
	}
	   if(a[i]<min){
	   min=a[i];
      }
	}
	printf("maximum number is = %d\n",max);
	printf("minimum number is = %d\n",min);
}

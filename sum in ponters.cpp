#include<stdio.h>
int main()
{
	int *ptr1,*ptr2;
	int num1,num2,sum;
	ptr1=&num1;
	ptr2=&num2;
	printf("enter two numbers: ");
	scanf("%d%d",ptr1,ptr2);
	sum=*ptr1+*ptr2;
	printf("sum is %d ",sum);
}

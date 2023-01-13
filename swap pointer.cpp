#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int a,b;
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("after swaping in main function\n");
	printf("value of a: %d\n",a);
	printf("value if b: %d\n",b);
	swap(&a,&b);
	printf("after swaping in main function\n");
	printf("value of a: %d\n",a);
	printf("value if b: %d\n",b);
	
	
	
	
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swaping in swap function\n");
	printf("value of a: %d\n",*a);
	printf("value if b: %d\n",*b);
}

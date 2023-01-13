#include<stdio.h>
int main()
{
	int a[100];
	int n,num,c=0,i;
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter numbers of an array ");
	for(i=0;i<n;i++){
		printf("enter number = ");
		scanf("%d",&a[i]);
		
		
	}
	printf("enter number to check ");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(a[i]==num)
		c++;
	}
	if(c==0)
	printf("not found");
	else
	printf("%d occurs %d",num,c);
}

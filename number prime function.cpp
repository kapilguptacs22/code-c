#include<stdio.h>
int prime(int num);
int main()
{
	int num,v;
	printf("enter number: ");
	scanf("%d",&num);
	v=prime(num);
	printf("%d",v)
	
}
int prime(int num){
	int i,c=0,prime;
	for(i=0;i<=num;i++)
	{
		if(num%i==0){
			c++;
		}
	}
	if(c==2){
		return (prime);
	}
	else{
		return 0;
	}
}

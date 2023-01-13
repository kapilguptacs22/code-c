#include<stdio.h>
int prime(int num);
void primerange(int n,int m);
int main()
{
	int num,n,m;
	printf("enter num: ");
	scanf("%d%d",&n,&m);
	primerange(n,m);
	return 0;
}
void primerange(int n,int m)
{
	while(n<=m)
	{
		if(prime(n)){
			printf("%d\n",n);
		}
		n++;
	}
}
prime(int num)
{
	int i;
	for(i=0;i<=num/2;i++)
	{
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

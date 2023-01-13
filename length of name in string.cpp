#include<stdio.h>
int main()
{
	char name[100];
	int i,count=0;
	printf("enter any string :");
	fgets(name,100,stdin);
	
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count-1);
}

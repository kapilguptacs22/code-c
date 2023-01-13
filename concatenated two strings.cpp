#include<stdio.h>
#include<string.h>
int main()
{
	char first[100],second[100];
	
	printf("enter first:");
	fgets(first,100,stdin);
	printf("enter second:");
	fgets(second,100,stdin);
	
	strcat(first,second);
	printf("concatenated two strings = %s",first);
}

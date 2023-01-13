#include<stdio.h>
#include<string.h>
int main()
{
	char str[200];
	char str2[200]="kapil";
	int c=0;
	printf("enter string:");
	fgets(str,100,stdin);
	c=strcmp(str,str2);
	printf("%d",c);

}

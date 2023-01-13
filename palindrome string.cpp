#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],reverse[100];
	int palin;
	printf("enter string:");
	fgets(str,100,stdin);
	
	strcpy(reverse,str);
	strrev(reverse);
	palin=strcmp(str,reverse);
	printf("%d\n",palin);
	if(palin==1)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
	return 0;
	
}

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len;
	int freq[26];
	
	printf("enter string: ");
	fgets(str,100,stdin);
	len = strlen(str);
	for(i=0;i<26;i++)
	{
		freq[i]=0; //frequency of each element initialising zero;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]>='a'&& str[i]<='z'){
		 freq[str[i]-97]++;
		 }
		 else if(str[i]>='A'&& str[i]<='Z'){
		 	freq[str[i]-65]++;
		 }
	}
	for(i=0;i<26;i++)
	{
		if(freq[i]>0)
		printf("%c = %d\n",(i+97),freq[i]);
	}
	
}

#include<stdio.h>
int main()
{
	char str[100];
	int alpha=0,digi=0,others=0,i;
	printf("enter string:");
	fgets(str,100,stdin);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&& str[i]<='z'|| str[i]>='A'&& str[i]<='Z')
		{
			alpha++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			digi++;
		}
		else
		{
			others++;
		}
	}
	printf("alpha = %d\n",alpha);
	printf("digi = %d\n",digi);
	printf("others = %d\n",others);
}

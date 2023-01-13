#include<stdio.h>
int main()
{
	int a[100];
	int value,pos,n,i,temp=0,j;
	printf("enter size of an array = ");
	scanf("%d",&n);
	printf("enter %d elements in array ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position where you want to insert the element = ");
	scanf("%d",&pos);
	printf("enter the value into that position = ");
	scanf("%d",&value);
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
		
	}
	a[pos-1]=value;
	n++;
	printf("after inserting :");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
}
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]>a[j]){
			
    		temp=a[i];
    		a[i]=a[j];
    		a[j]=temp;
    	}
		}
	}
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

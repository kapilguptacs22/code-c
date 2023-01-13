#include<stdio.h>
int main()
{
	int a[100],temp=0,j;
	int n,pos,value,i,num;
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter value for insert: ");
	scanf("%d",&value);
	
	
	for(i=n-1;i>n;i--)
	{
	 a[i+1]=a[i];	
	
	
	n++;
}a[pos]=value;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++){
			if(a[i]<a[j])
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
		for(i=0;i<n-1;i++)
		{
			printf("after inserting an array [%d] = %d\n",i,a[j]);
			
		}
	return 0;
}

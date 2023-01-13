#include<stdio.h>
void printArray(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void bubbleSort(int *a,int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
}
int main()
{
	int a[]={9,8,7,6,5,4};
	int n=6;
	printArray(a,n);
	bubbleSort(a,n);
	printArray(a,n);
	
}

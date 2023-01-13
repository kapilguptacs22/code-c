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
	int n;
	printf("enter size of an array: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
    }
    printf("original array\n");
	printArray(a,n);
	printf("after sorting array\n");
	bubbleSort(a,n);
	printArray(a,n);
	printArray(a,n);
}
	

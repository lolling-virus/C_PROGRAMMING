#include <stdio.h>
int main(){
	void search(int *, int);
	printf("please enter the length of the array:\n");
	int n,i;
	scanf("%d",&n);
	int a[n];
	printf("please enter the numbers in the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	search(a,n);
	
}
void search(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<(n-i-1);j++){
			if(a[j]>a[j+1]){
				temp = a[j+1];
				a[j+1]=a[j];
				a[j] = temp;
			}
		}
	}
	printf("the sorted array is : \n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
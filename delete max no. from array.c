#include <stdio.h>
int main(){
	printf("please enter the length of an array:\n");
	int n,i,max=0,maxi;
	scanf("%d",&n);
	int a[n];
	printf("please enter the numbers in the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		max = (max>a[i])?max:a[i];
		maxi = (max>a[i])?maxi:i;
	}
	printf("the original array is :\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=maxi;i<(n-1);i++){
		a[i]=a[i+1];
	}
	printf("the array after deleating the largest element is : \n");
	for(i=0;i<n-1;i++)
		printf("%d\t",a[i]);
	return 0;
}
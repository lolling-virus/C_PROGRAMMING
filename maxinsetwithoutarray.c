#include <stdio.h>
int main(){
	printf("please enter the number of terms you want to enter:\n");
	int n,max=0,i,a;
	scanf("%d",&n);
	printf("please enter the number one after the another \n");
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		max = (max>a)?max:a;
	}
	printf("the largest amongst the numbers is : %d",max);
}
#include <stdio.h>
int fibonacci(int n){
	int i,a=0,b=1,sum=0;
	printf(" 0 , 1 ,");
	for(i=0;i<=n;i++){
		sum = a+b;
		printf(" %d ," , sum);
		a=b;
		b = sum;
	}
	return 0 ;
}
int main(){
	printf("please enter the number of terms \n");
	int n;
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}

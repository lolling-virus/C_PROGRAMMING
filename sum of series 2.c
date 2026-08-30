#include <stdio.h>
#include <math.h>
int factorial(int a){
	int i,fact=1;
	for(i=1;i<=a;i++) fact = fact * i;
	return fact;
}

int factorial(int);

int main(){
	int x,n,i,powr;
	float sum;
	printf("please enter the number of terms ; \n");
	scanf("%d" , & n);
	printf("please enter the value of x: \n");
	scanf("%d",&x);
	for(i=0;i<=n;i++){
		powr = (int)pow(x,i);
		sum = sum + (powr/factorial(i));
	}
	printf("the result of the sum of the series is : %f \n",sum);
	return 0;
}
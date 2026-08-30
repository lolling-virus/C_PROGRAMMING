#include <stdio.h>
int factorial(int a){
	int i,prod=1;
	for(i=1;i<=a;i++)
		prod *= i;
	return prod;
}
int krishnamurthy(int a){
	int i,sum=0,temp,fact;
	temp = a;
	while(a!=0){
		i = a%10;
		sum = sum+factorial(i);
		a=a/10;
	}
	if(sum == temp){
		printf("the number %d is krishnamurthy number \n",temp);
	}
}
void main(){
	printf("please enter the number to check if it is krishnamurthy number or not: \n");
	int a,krish;
	scanf("%d",&a);
	krishnamurthy(a);
}
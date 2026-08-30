//euler number finding
#include <stdio.h>
#include <math.h>
int factorial(int a){
	int prod,i;
	for(i=1;i<=a;i++) prod = prod*i;
	return prod;
}
int factorial(int);
int euler(int n){
	int b,i,s;
	b = factorial(n);
	for(i=0;i<=n;i++){
		s += 1/b;
		
	}
	return s;
}
int euler(int);
int main(){
	int a,b;
	printf("please enter the number");
	scanf("%d",&a);
	b = euler(a);
	printf("the euler number is %d\n",b);
	return 0;
}
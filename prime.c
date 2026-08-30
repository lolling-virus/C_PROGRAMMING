#include <stdio.h>
#include <math.h>
int primenumber(int a){
	int b,c,flag,i;
	b = (int)sqrt(a);
	for(i=2;i<=b;i++){
		c = a%i;
		if(c==0){
			flag = 1;
			break;
		}
	}
	return flag;
}
int primenumber(int);
main(){
	int a,b;
	printf("please enter the number \n");
	scanf("%d",&a);
	b = primenumber(a);
	if(b == 0) printf("the number is prime \n");
	else printf("the number is not prime \n");
}
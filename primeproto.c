#include <stdio.h>
#include <math.h>
int primenumber(int a){
	int b,c,flag,i;
	b = (int)sqrt(a);
	for(i=2;i<=b;i++){
		c = a%i;
		if(c==0){
			flag =1;
			break;
		}
	}
	return flag;
}
int primenumber(int);
int main(){
	printf("please enter the bnumber \n");
	int n,a;
	scanf("%d",&n);
	a = primenumber(n);
	if(a==0) printf("prime");
	else printf("non prime");
	return 0;
}
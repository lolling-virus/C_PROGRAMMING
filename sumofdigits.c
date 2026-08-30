#include <stdio.h>
int main(){
	int n,s=0,r;
	printf("please enter the number \n");
	scanf("%d",&n);
	while(n!=0){
		r = n%10;
		s = s+r;
		n = n/10;
	}
	printf("the sum of the digits is : %d \n",s);
	return 0;
}
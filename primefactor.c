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
int main(){
	int n,i,phch,temp;
	printf("please enter the number to find the factors : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		temp = n%i;
		//printf("%d \n",temp);
		if(temp == 0){
			//printf("%d \n",temp);
			phch = primenumber(i);
			//printf("%d \n",phch);
			if(phch == 0) printf("%d is the prime factor of %d \n ",i,n);
		}
	}
	return 0;
}
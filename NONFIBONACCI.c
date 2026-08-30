#include <stdio.h>
int main(){
	printf("please enter the number of terms to be printed in the non fibonacci series \n");
	int n,fib,i,j,flag,sum=0,a=0,b=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		flag=0;
		sum=0,a=0,b=1;
		//printf("%d\n",i);
		if(i == 0){
			flag = 1;
		}else{
			for(j=0;j<=i;j++){
				sum = a+b;
				a = b;
				b=sum;
				if(sum == i){
					flag = 1;
					break;
				}
			}
			//printf(". \n");
			if(flag != 1){
				printf("%d \n",i);
			}
		}
	}
	return 0;
}
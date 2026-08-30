#include <stdio.h>
#include <math.h>
int main(){
	printf("please enter the numbers to find the gcd \n");
	int n1,n2,rem=0,quo=0;
	scanf("%d %d",&n2,&n1);
	if(n2>n1){
		//printf("e \n");
		do{
			//printf("E \n");
			quo = n2/n1;
			rem = n2%n1;
			n2 = n1;
			n1 = rem;
		}while(rem!=0);
		printf("the gcd of the numbers is %d " ,quo);
	}else{
		do{
			quo = n1/n2;
			rem = n1%n2;
			n1 = n2;
			n2 = rem;
		}while(rem!=0);
		printf("the gcd of the number is %d ",quo);
	}
	return 0;
}

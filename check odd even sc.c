#include <stdio.h>
int main(){
	int a,b=0;
	printf("please enter the number to check if it is odd or even : \n");
	scanf("%d",&a);
	b = a%2;
	switch(b){
		case 1:
			printf("The number entered is odd");
			break;
		case 0:
			printf("the number entered is even");
			break;
	}
	return 0;
}

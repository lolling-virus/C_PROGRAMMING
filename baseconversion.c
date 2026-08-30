#include <stdio.h>
int reverse(int a){
	int temp,div,mod;
	while(a!=0){
		mod = a%10;
		temp = temp*10+mod;
		a = a/10;
	}
	return temp;
}
int main(){
	int dec,x,temp,div,mod;
	printf("Please enter the decimal number \n");
	scanf("%d",&dec);
	printf("please enter the base of the new number system : \n");
	scanf("%d",&x);
	while(dec!=0){
			div = dec/x;
			mod = dec%x;
			temp=temp*10+mod;
			printf("%d \n",temp);
			dec = div;
		if(div<x){
			temp = temp*10+div;
			temp = reverse(temp);
			printf("the number in %d base is : %d \n",x,temp);
			break;
		}
	}
	return 0;
}
//checking if an number is armstrong or not 
#include <stdio.h> 
#include <math.h>
int count(int a){
	int b,count;
	while(a!=0){
		//rintf("x");
		count++;
		a = a/10;
	}
	return count;
}
int count(int);
int armstrong(int a){
	int pw,temp,cnt,sum,flag,adg;
	cnt = count(a);
	temp = a;
	while(a!=0){
		//printf("X");
		adg=a%10;
		pw = (int)pow(adg,cnt);
		sum += pw;
		a = a/10;
	}
	if(temp==sum) flag=1;
	else flag=0;
	return flag;
}
int armstrong(int);

int main(){
	int a,f;
	printf("please enter the number \n");
	scanf("%d",&a);
	f = armstrong(a);
	if(f) printf("the number is armstrong \n");
	else printf("the number is not armstrong \n");
	return 0;
}
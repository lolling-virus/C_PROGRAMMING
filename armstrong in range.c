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
	int i,f,low,high;
	printf("please enter the lowest and highest value\n");
	scanf("%d %d",&low,&high);
	printf("--------ARMSTRONG----------\n");
	for(i=low;i<=high;i++){
		f = armstrong(i);
		if(f==1) printf("%d \n",i);
	}
	return 0;
}
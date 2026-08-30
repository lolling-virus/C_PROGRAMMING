#include <stdio.h>
int main(){
	int year,leap=0,century=0,century_leap=0;
	printf("please enter the year \n");
	scanf("%d",&year);
	leap = year%4;
	century = year%100;
	century_leap= year%400;
	if(century == 0){
		if(century_leap == 0){
			printf("the year is a century leap year \n");
		}else{
			printf("the year is a century but not a leap year \n");
		}
	}else if(leap == 0){
		printf("the year is a leap year \n");	
	}else{
		printf("the year is not a leap year \n");
	}
	return 0;
}
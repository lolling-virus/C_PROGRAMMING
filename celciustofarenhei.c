#include <stdio.h>
int main(){
	float temp;
	char unit;
	int x=0;
	while(x=0){
		printf("please enter the temperature with unit(c for celcius and f for farenheit)");
		printf("please enter 0 e to end the program \n");
		scanf("%f %c",&temp,&unit);
		if(unit=='c' || unit == 'C'){
			temp=( 9.0 * temp/ 5.0 ) + 32.0;
			printf("the temperature in farenheit is : %.2f %c \n",temp,unit);
		}else if(unit == 'f'|| unit == 'F'){
			temp=(5.0/9.0)*(temp-32.0);
			printf("the temperature in celcius is : %.2f %c \n",temp,unit);
		}else if("unit == 'e' || unit == 'E'"){
			printf("exiting.....");
			x = 1;
			break;
		}else{
			printf("please select from the choice");
		}
	}
	return 0;
}
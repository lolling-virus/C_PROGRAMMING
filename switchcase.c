#include <stdio.h>
int main(){
	int x=0,choice,a,b,c=0;
	double e,f,p=0;
	while(x==0){
		printf("please slect an option \n");
		printf("1.addition\n2.subtration\n3.multiplication\n4.division\n5.exit\n");
		printf("please enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("please enter the first number :\n");
				scanf("%d",&a);
				printf("please enter the second number: \n");
				scanf("%d",&b);
				c = a + b;
				printf("The sum of two numbers is : %d\n" ,c);
				break;
			case 2:
				printf("please enter the first number\n");
				scanf("%d",&a);
				printf("pkease enter the second number\n");
				scanf("%d",&b);
				if(a>b){
					printf("a is greater than b hence performing a-b \n");
					c = a-b;
					printf("the difference is : %d\n",c);
				}else{
					printf("b is greater than a hence performing b-a \n");
					c = b-a;
					printf("the difference is : %d\n" , c);
				}
				break;
			case 3:
				printf("please enter the first number \n");
				scanf("%lf",&e);
				printf("please enter the second number \n");
				scanf("%lf",&f);
				p = e * f;
				printf("the product of the two numbers is : %lf \n", p);
				break;
			case 4:
				printf("please enter the no. to be divided \n");
				scanf("%lf",&e);
				printf("please enter the no. with which it is to be divided \n");
				scanf("%lf",&f);
				if(f==0){
					printf("division by zero not possible \n");
					break;
				}else{
					p = e / f;
					printf("the result of the division is : %lf\n",p);
					break;
				}
			case 5:
				printf("exiting...");
				x=5;
				break;				
		}
	}
}

#include <stdio.h>
int main(){
	printf("please enter the string:\n");
	char c[100];
	scanf("%[^\n]",c);
	printf("the string entered is : \n");
	printf("%s",c);
}
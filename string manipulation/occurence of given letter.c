#include <stdio.h>
#include <string.h>
int main(){
	char st[100];
	int i,c=0;
	char srch;
	printf("please enter the string : \n");
	fflush(stdin);
	gets(st);
	printf("please enter the letter you want to search: \n");
	scanf("%c",&srch);
	for(i=0;st[i];i++){
		//printf("*");
		if(tolower(st[i]) == tolower(srch)){
			c++;
		}
	}
	printf("the given string is :\t\"%s\"\n",st);
	printf("the letter you wanted to search is : \t\"%c\"\n",srch);
	printf("the number of times the letter has occured in the sentence is : \t%d",c);
	return 0;
}
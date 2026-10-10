#include <stdio.h>
#include <string.h>
int main(){
	void palindrome(char*);
	char st[100];
	printf("please enter the string :\n");
	fflush(stdin);
	gets(st);
	palindrome(st);
	return 0;
	
}
void palindrome(char st[100]){
	//void reversal(char*);
	int i,j=0,l;
	char temp[100];
	l = strlen(st);
	for(i=l-1;i>=0;i--){
		temp[j] = st[i];
		j++;
	}
	printf("the reverse of the string is :\t\"%s\"\n",temp);
	if(strcmp(st,temp) == 0){
		printf("the string is palindrome\n");
	}else{
		printf("the string is not palindrome \n");
	}
}
void reversal(char st[100]){
	int i,j=0,l;
	char temp[100];
	l = strlen(st);
	for(i=l-1;i>=0;i--){
		temp[j] = st[i];
		j++;
	}
	printf("the reverse of the string is :\t\"%s\"\n",temp);
}
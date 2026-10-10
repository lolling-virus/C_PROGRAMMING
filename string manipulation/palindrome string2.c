#include <stdio.h>
#include <string.h>
int main(){
	int palindrome(char*);
	int l;
	char st[100];
	printf("please enter the string:\n");
	fflush(stdin);
	gets(st);
	l = palindrome(st);
	//printf("%d",l);
	if(!l)
		printf("the string is palindrome\n");
	else
		printf("the string is not palindrome\n");
}
int palindrome(char st[100]){
	int low=0,l,high,flag=0;
	l = strlen(st);
	high = l-1;
	while(high > low){
		if(st[high] == st[low]){
			low ++;
			high--;
		}else{
			return 1;
		}
	}
	return 0;
}
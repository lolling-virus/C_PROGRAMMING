#include <stdio.h>
#include <string.h>
void reverse(char st[100]){
	int i,l,j=0;
	char temp[100];
	l = strlen(st);
	for(i=l-1;i>=0;i--){
		temp[j] = st[i];
		j++;
	}
	printf("the reversed string is : \t\"%s\"\n",temp);
}
int main(){
	void reverse(char *);
	char st[100];
	printf("please enter the string:\n");
	fflush(stdin);
	gets(st);
	reverse(st);
	return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
	int i,j=0;
	char st[100],temp[100];
	printf("please enter the string: \n");
	fflush(stdin);
	gets(st);
	for(i=0;st[i];i++){
		if(st[i] == ' ')
			continue;
		else
			temp[j] = temp[j]+st[i];
			j++;
	}
	printf("the original string is : \"%s\"\n",st);
	printf("the string after removing the space is : \"%s\"\n",temp);
	return 0;
	
}
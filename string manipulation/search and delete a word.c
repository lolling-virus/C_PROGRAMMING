#include <stdio.h>
#include <string.h>
int main(){
	char st[100],temp[100],search[100],c[100];
	int i,j=0,l=0,q;
	printf("please enter the string:\n");
	fflush(stdin);
	gets(st);
	printf("please enter the word to be searched :\n");
	fflush(stdin);
	gets(search);
	/*printf("%s\n",st);
	printf("%s\n",search);*/
	for(i=0;st[i];i++){
		//printf("*\n");
		if(st[i] != ' '){
			//printf("&\n");
			c[l] = st[i];
			l++;
		}else{
			printf("%s \n",c);
			if(strcmp(search,c) == 0){
				for(q=0;c[q];q++){
					temp[j] = c[q];
					j++;
				}
				temp[j] = temp[j] + ' ';
				j++;
			}
		}
		printf("%s",temp);
	}
	printf("the string after deleteing the given string is : \"%s\"\n",temp);
	return 0;
}
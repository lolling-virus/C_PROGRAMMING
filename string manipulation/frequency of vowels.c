#include <stdio.h>
#include <string.h>
int main(){
	char st[100];
	int i,tot_cnt=0,cnta = 0,cnte=0,cnti=0,cnto=0,cntu=0;
	char c;
	printf("please enter the string :\n");
	fflush(stdin);
	gets(st);
	for(i=0;st[i];i++){
		c = tolower(st[i]);
		if(c == 'a'){
			cnta++;
			tot_cnt++;
		}else if(c == 'e'){
			cnte++;
			tot_cnt++;
		}else if(c=='i'){
			cnti++;
			tot_cnt++;
		}else if(c=='o'){
			cnto++;
			tot_cnt++;
		}else if(c=='u'){
			cntu++;
			tot_cnt++;
		}
	}
	printf("the total no. of vowels is : \t%d\n",tot_cnt);
	printf("the total no. of a in the statement is :\t%d\n",cnta);
	printf("the total no. of e in the statement is :\t%d\n",cnte);
	printf("the total no. of i in the statement is :\t%d\n",cnti);
	printf("the total no. of o in the statement is :\t%d\n",cnto);
	printf("the total no. of u in the statement is :\t%d\n",cntu);
	return 0;
	
}
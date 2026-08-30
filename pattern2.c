#include <stdio.h>
int main(){
	printf("please enter the number of rows to be printed: \n");
	int n,i,j,c;
	scanf("%d",&n);
	for(i=n;i>0;i--){
		for(j=0;j<=c;j++) printf("  ");
		for(j=0;j<i;j++) printf(" * ");
		c++;
		printf("\n");
	}
	return 0;
}
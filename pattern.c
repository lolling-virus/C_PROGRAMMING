#include <stdio.h>
int main(){
	printf("please enter the number of terms \n");
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++) printf(" * ");
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
int main(){
	int z=0,n;
	printf("please enter the number of terms \n");
	scanf("%d",&n);
	while (z<n){
		printf(" * ");
		z++;
	}
	return 0;
}
#include <stdio.h>
int main(){
	int n,i,s=0;
	printf("please enter the number of terms \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		s += i;
	}
	printf("the sum of the series is : %d \n",s);
	return 0;
}
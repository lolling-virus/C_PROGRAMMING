#include <stdio.h>
void sum(int nr,int nc,int a[nr][nc],int b[nr][nc]);
void multi(int n,int a[n][n],int b[n][n]);
int main(){
	int x=1,choice,nr,nc,i,j;
	while(x){
		printf("please enter your choice:\n");
		printf("1.matrix addition \n2.matrix multiplication \n3.exit\n");
		printf("please enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
			
				printf("please enter the row and column of the matrices:\n");
				scanf("%d %d",&nr,&nc);
				int a[nr][nc];
				int b[nr][nc];
				//int s[nr][nc];
				printf("please enter the elements in the first matrix:\n");
				for(i=0;i<nr;i++){
					for(j=0;j<nc;j++){
						scanf("%d",&a[i][j]);
					}
				}
				printf("please enter the elements in the second matrix:\n");
				for(i=0;i<nr;i++){
					for(j=0;j<nc;j++){
						scanf("%d",&b[i][j]);
					}
				}
				sum(nr,nc,a,b);
				break;
			}
			case 2:{
				printf("please enter the row and column of the matrices:\n");
				scanf("%d",&nr);
				int c[nr][nr];
				int d[nr][nr];
				//int s[nr][nr];
				printf("please enter the elements in the first matrix:\n");
				for(i=0;i<nr;i++){
					for(j=0;j<nr;j++){
						scanf("%d",&c[i][j]);
					}
				}
				printf("please enter the elements in the second matrix:\n");
				for(i=0;i<nr;i++){
					for(j=0;j<nr;j++){
						scanf("%d",&d[i][j]);
					}
				}
				multi(nr,c,d);
				break;
			}
			case 3:{
				printf("EXITING .......... \n");
				x = 0;
				break;
			}
			default:{
				
				printf("WRONG CHOICE ........ PLEASE ENTER AGAIN.......\n");
				break;
			}
		}
	}
	return 0;
}
void sum(int nr,int nc,int a[nr][nc],int b[nr][nc]){
	int s[nr][nc];
	int i,j;
	for(i=0;i<nr;i++){
		for(j=0;j<nc;j++){
			s[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("the sum of the two matrices is : \n");
	for(i=0;i<nr;i++){
		for(j=0;j<nc;j++){
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
void multi(int n,int a[n][n],int b[n][n]){
	int m[n][n];
	int i,j,k,s=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				s += (a[i][k]*b[k][j]);
			}
			m[i][j]=s;
			s=0;
		}
	}
	printf("the multiplication of the two matrices is : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}
#include<stdio.h>

int main(){
	int a[3][2]={{0,1},{2,0},{3,1}};
	int b[2][2]={{3,4},{1,2}};
	int i,j,sum,c[3][2],k;
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			sum=0;
			for(k=0;k<2;k++){
				sum+=a[i][k]*b[k][j];
			}
		c[i][j]=sum;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
#include<time.h>

void maxmin(int matrix[3][3],int result[2]);
int main(){
	int i,j,matrix[3][3],result[2];
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrix[i][j]=rand()%10;
		}
	}
	
	maxmin(matrix,result);
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}	
	
	printf("%d",result[0]-result[1]);
	
	return 0;
}
void maxmin(int matrix[3][3],int result[2]){
	int i,j,max,min;
	max=matrix[0][0];
	min=matrix[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(max<matrix[i][j]){
				max=matrix[i][j];
			}
			if(min>matrix[i][j]){
				min=matrix[i][j];
			}			
		}
	}
	
	result[0]=max;
	result[1]=min;	
}

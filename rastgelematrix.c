#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 

	int trace(int,int,int);
	int fact(int);
int main(){ 

	int matrix[3][3],i, j,sum=0,number; 
	
	srand(time(NULL));
	for(i=0; i<3; ++i) 
	for(j=0; j<3; ++j) { 
		matrix[i][j]=rand()%3;
	} 
//Matrisi yazdýr
	for(i=0; i<3; ++i){
	for(j=0; j<3; ++j) { 
		printf("%d\t",matrix[i][j]);
	} 
		printf("\n");
	} 
//Sum yazdýr	
	for(i=0; i<3; ++i){
	for(j=0; j<3; ++j) { 
		number=trace(matrix[i][j],i,j);
		sum+=number;
		number=0;		
	} 	
	}
	printf("%d\n",sum); 
	printf("%d",fact(sum));

	return 0;
}


int trace(int m,int i,int j){
	if(i==j){
		return m;
	}else{
		return 0;
	}
}

int fact(int f){
	if(f!=1){
		return f*fact(f-1);
	
	}
}

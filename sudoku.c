#include<stdio.h>
#include<stdlib.h>
#define N 9

int validate_rows(int sudoku[][9]);
int validate_cols(int sudoku[][9]);
int validate_blocks(int sudoku[][9]);
int main(){

int s[N][N] ={
{5,3,4,6,7,8,9,1,2},
{6,7,2,1,9,5,3,4,8},
{1,9,8,3,4,2,5,6,7},
{8,5,9,7,6,1,4,2,3},
{4,2,6,8,5,3,7,9,1},
{7,1,3,9,2,4,8,5,6},
{9,6,1,5,3,7,2,8,4},
{2,8,7,4,1,9,6,3,5},
{3,4,5,2,8,6,1,7,9}};

if(validate_rows(s) && validate_cols(s) && validate_blocks(s)){
	printf("VALID");
}else{
	printf("inVALiD");	
}
return 0;	
}

int validate_rows(int sudoku[][9]){
	int search[9]={1,2,3,4,5,6,7,8,9};
	int i,j,k,m;
	for(i=0;i<9;i++){
		int flag[9]={0};
		for(j=0;j<9;j++){
			for(k=0;k<9;k++){
				if(search[k]==sudoku[i][j]){
					flag[k]=1;
				}
			}
			if(j==8){
				for(m=0;m<9;m++){
					if(flag[m]!=1){
						return 0;
					}
				}
			}
		}
	}
}

int validate_cols(int sudoku[][9]){
	int search[9]={1,2,3,4,5,6,7,8,9};
	int i,j,k,m;
	for(i=0;i<9;i++){
		int flag[9]={0};
		for(j=0;j<9;j++){
			for(k=0;k<9;k++){
				if(search[k]==sudoku[j][i]){
					flag[k]=1;
				}
			}
			if(j==8){
				for(m=0;m<9;m++){
					if(flag[m]!=1){
						return 0;
					}
				}
			}
		}
	}
}

int validate_blocks(int sudoku[][9]){
	int search[9]={1,2,3,4,5,6,7,8,9};
	int i,j,k,m,x,y;
	
	for(i=0;i<3;i++){		
		for(j=0;j<3;j++){
			int flag[9]={0};
			for(x=0;x<3;++x){
				for(y=0;y<3;y++){
						for(k=0;k<9;k++){
							if(search[k]==sudoku[i*3+x][j*3+y]){
								flag[k]=1;
							}
						}					
				}

				if(x==2){
					for(m=0;m<9;m++){
						if(flag[m]!=1){
							return 0;
						}
					}				
				}
			}
		
		}
	}	
}


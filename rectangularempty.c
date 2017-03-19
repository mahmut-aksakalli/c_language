#include <stdio.h>

int main(){
	
	int width,height,row=1,column;
	
	scanf("%d %d",&height,&width);
	
	while(row <= height){		
	
		column=1;
		while(column <= width){


			if(column==1 || column==width ){
				printf("|");
			}else if((column != 1 || column != width) && (row == 1 || row == height)){
				printf("-");
			}else{
				printf(" ");	
			}
						
			column++;
		}
		
		printf("\n");
		row++;
	}
	
	return 0;
}

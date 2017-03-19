#include <stdio.h>

int main(){
	
	int width,height,row=1,column;
	
	scanf("%d %d",&height,&width);
	
	while(row <= height){		
	
		column=1;
		while(column <= width){
			
			printf("*");
			column++;
		}
		
		printf("\n");
		row++;
	}
	
	return 0;
}

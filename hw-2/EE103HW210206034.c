#include<stdio.h>

int main(void){
	
	int x=0,y=5;
	
	while(x<=5){
		
		if(x+y==5 && x-y==1)
			printf("x=%d \ny=%d",x,y);
		
		x++;
		y--;
	}
}

#include <stdio.h>

int main(){
	
	int width,height,row=1;
	
	scanf("%d %d",&height,&width);
	
	while(row<=height){
		
		mod = number % 2;
		if(mod == 0)
			printf("%d \n",number);
		
		number++;
	}
}

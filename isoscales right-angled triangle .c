#include <stdio.h>

int main(void){
	
	int number,row=1,star;
	
	scanf("%d",&number);
	
	if(number >=0 ){
		
		while(row <= number){
			star=1;
			while(star <=row){
				printf("*");
				star++;
			}
			printf("\n");
			row++;
		}
	}else{
		printf("Write a positive number");
	}

	return 0;
	
}

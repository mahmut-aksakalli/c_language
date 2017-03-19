#include <stdio.h>

int main(){
	
	int number,count=1;
	scanf("%d",&number);

		do{
				if(number<1){
					printf("ERROR!!  The number is less than 1");
					break;
				}else{			
							if((number%2)==0){
								number/=2;
								printf("Next value is: %d \n",number);
								
							}else{
								number*=3;
								number+=1;
								printf("Next value is: %d \n",number);
							}
							count++;
					}
		}while(number!=1);
	printf("Step number is :%d",count);	
}


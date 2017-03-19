#include <stdio.h>

int main(){
	
	int number,i=1,sum,temp;
	
	scanf("%d",&number);
	sum=0;
	while(i<=(number/2)){
		temp=number%i;
		if(temp==0){
			sum+=i;
		}	
		
		i++;
	}
	
	if(sum ==number){
		printf("%d number is perfect number",number);
	}
	else{
			printf("%d number is not perfect number",number);	
	}
}

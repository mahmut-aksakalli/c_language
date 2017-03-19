#include<stdio.h>

int main(){
	int min_celcius,step_size,num_lines,i,kelvin;
	float fahrenheit;

start:	
	printf("Enter Minimum Celsius Value, Step Size, Number of Lines:\n");
	scanf("%d %d %d",&min_celcius,&step_size,&num_lines);
	
	if(min_celcius<=(-273)){
		printf("Thanks for using this program…Exiting now..");
	}else{		
			printf("Celsius    Fahrenheit    Kelvin \n");
			printf("-------------------------------------------------------- \n");
			while(min_celcius<273){	
			
				for(i=1;i<=num_lines;i++){					
						fahrenheit=(float)((1.8)*(min_celcius))+32;
						kelvin=min_celcius+273;
						printf("%3d  %12.0f  %11d \n",min_celcius,fahrenheit,kelvin);
						min_celcius+=step_size;
						if(min_celcius>273 || i>num_lines){
							break;
						}					
						
					}
				break;	
			}
			printf("\n");
			goto start;				
	}

			
	
	return 0;
}

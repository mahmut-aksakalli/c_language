#include <stdio.h>

int main(void){
	
	int range,initial,index,mod;
	
	scanf("%d %d",&initial,&range);	
	
	for(initial;initial<=range;initial++){ //2 ile range arasý tüm sayýlar için döndür
	
		for(index=2;index<=initial;index++){ // 2 ile Sayýya kadar olan sayýlarý dene
			
				mod=initial % index;
				if(mod != 0){
					continue;
				}else{
					if(mod==0 && index != initial){ 
						break;
					}else{
						printf("%d \n",initial);
					}
				
				}								
				
			}
		}
	

	return 0;
	
}

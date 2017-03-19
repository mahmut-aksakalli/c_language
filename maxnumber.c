#include <stdio.h>

int main(){
	int sayi[10],i,max_number;
	
	for(i=0;i<10;i++){
		scanf("%d",(sayi+i));
	}
	max_number = sayi[0];
	for(i=0;i<=9;i++){
		if(sayi[i]>max_number){
			max_number=sayi[i];
		}
	}
	printf("%d",max_number);
}

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int max_range,min_range,n,i,j,number[101];
	
	printf("Enter N Value : ");
	scanf("%d",&n);
		if(n>100){return 0;}
	printf("Enter Min Valuee : ");
	scanf("%d",&min_range);
	printf("Enter Max Value : ");
	scanf("%d",&max_range);	
		if(max_range - min_range>100){return 0;}	
// Frequent ilk degerlere 0 ataniyor..	
	int frequent[ max_range];
	for(i=0;i<max_range;i++){
		frequent[i]=0;
	}	
//Number dizisinin elemanlari olusturuluyor		
	srand(time(NULL));	
	for(i=0;i<n;i++){
		tekrar:	
			number[i]=rand()%max_range;
			if(number[i]<min_range)
				goto tekrar;
				
	}

//Olusturulan degerlerin frequently sayýsý hesaplaniyor		
	for(i=0;i<=n;i++){
		for(j=0;j<max_range;j++){
			if(j==number[i]){
				frequent[j] =frequent[j]+1;
			}	
		}
	}
	printf("Histogram of the N=%d random numbers is as follows\n",n);
// X ler yaziliyor	
	for(i=min_range;i<max_range;i++){
		printf("%3d  ",i);
		for(j=0;j<frequent[i];j++){
			printf("X");
		}
		printf("\n");
	}
	
return 0;	
}



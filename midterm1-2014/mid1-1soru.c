#include<stdio.h>

int main(){
	int number,temp,sum=0,i=0,k;
	int dizi[100];
	scanf("%d",&number);
	
	temp=number;
	while(temp!=0){
		dizi[i]=temp%10;
		temp=temp/10;
		i++;
	}
	for(k=0;k<i;k++){
		sum+=dizi[k];
	}
	printf("%d",sum);
	return 0;
}

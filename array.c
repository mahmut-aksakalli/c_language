#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main() {
 
int i,n,deneme,temp,j,average,sum=0,k,s; 

printf("Enter the number of elements:"); 
scanf("%d",&n); 
int data[n];
//deðerler atama
srand(time(NULL));
for(j=0;j<n;j++) { 
	data[j]=rand()%16;
 } 
 for(s=0;s<n;s++){
 	printf("%d\n",data[s]);
 }
//Küçükten büyüðe
for(deneme=0;deneme<n-1;++deneme){
	for(i=0;i<n-deneme-1;++i) { 
		if(data[i]>data[i+1]) { 
			temp=data[i]; 
			data[i]=data[i+1]; 
			data[i+1]=temp; 
		} 
	} 
}
//Toplam bulma
for(k=0;k<n;k++){
	sum+=data[k];
}
average=sum/n;

printf("The lasgest number : %d\n",data[n-1]); 
printf("The Average of numbers : %d\n",average); 

return 0;
}


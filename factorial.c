#include <stdio.h>
#include <stdlib.h>

int factorial (int);
void fibonacci (int);
int main(){
	int process,n,fact,fiboc,oddsum;
tekrar:	
	printf("1-Compute Factorial of n \n");
	printf("2-Compute Fibonacci of n \n");
	printf("3-Compute Sum_Odd of n \n");
	printf("4-Exit\n");
	scanf("%d",&process);
	printf("Write a number to calculate : ");
	scanf("%d",&n);	
	switch(process){
		case 1:
			fact=factorial(n);
			printf("%d \n",fact);
		break;	
		case 2:
			fibonacci(n);		
		break;	
		case 3:
			oddsum=odd(n);
			printf("%d \n",oddsum);	
		break;	
		case 4:
			exit(0);
		break;							
	}
	goto tekrar;	
}
//Factorial function
int factorial(int n){	
	if(n!=1){
		return n*factorial(n-1);
	}
}
//Fibonacci function
void fibonacci(int n){
	int fb=1, fb2=1,fb3,i;
      for(i=1; i<=n; i++)
      {
            fb3=fb+fb2;
            printf("%d ",fb);
            fb=fb2;
            fb2=fb3;
      }
      printf("\n");	
}

int odd(int n){
	int sum=0,i;
	for(i=0;i<=n;i++){
		if(i%2==1){
			sum+=i;
		}
	}
	return sum;
}


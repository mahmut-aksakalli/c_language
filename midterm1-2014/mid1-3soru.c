#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n,*ptr,i,frequent=0;
	
	scanf("%d",&n);
	ptr = (int *) malloc (n*sizeof(int));

	srand(time(NULL));
	for(i=0;i<n;i++){
		*(ptr+i)=rand()%10;
	}
	for(i=0;i<n;i++){
		if(*(ptr+i)==1){
			frequent++;
		}
		free(ptr+i);
	}
	printf("%d",frequent);
	
	return 0;
}


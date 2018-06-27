#include <stdio.h> 
int main() {
 
int i,n,step,temp; 

printf("Enter the number of elements:"); 
scanf("%d",&n); 
int data[n];

for(i=0;i<n;++i) { 
printf("%d. Enter element:",i+1); 
scanf("%d",&data[i]); } 

for(step=0;step<n-1;++step) 
for(i=0;i<n-step-1;++i) { 
	if(data[i]>data[i+1]) { 
		temp=data[i]; 
		data[i]=data[i+1]; 
		data[i+1]=temp; 
	} 
} 

printf("In ascending order: "); 
for(i=0;i<n;++i) 
printf("%d ",data[i]); 
}


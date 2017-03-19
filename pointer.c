#include<stdio.h>
#include<stdlib.h>

struct person {
	char name[50];
	int age;
};
int main(){
	struct person *ptr;
	int i,n;
	printf("Enter the number of person:");
	scanf("%d",&n);
	ptr=(struct person *)malloc(n*sizeof(struct person));
	
	for(i=0;i<n;i++){
		printf("Enter %d. person name:",i+1);
		scanf("%s",&(ptr+i)->name);
		printf("Enter %d. person age:",i+1);
		scanf("%d",&(ptr+i)->age);
	}
	
	for(i=0;i<n;i++){
		puts((*(ptr+i)).name);
		printf("%d\n",(*(ptr+i)).age);
	}
return 0;	
}

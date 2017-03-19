#include <stdio.h> 
#include <stdlib.h> 

struct linked{
	int data;
	struct linked *next;
};

int main ()
{
	int value1,value2;
	scanf("%d",&value1);
	scanf("%d",&value2);
	struct linked *start = malloc(sizeof(struct linked));
	struct linked *change = start;
	change->data=value1;
	change->next=malloc(sizeof(struct linked));
	change=change->next;
	change->data=value2;
	change->next=NULL;
	change=start;
	while(change!=NULL){
		printf("%d\n",change->data);
		change=change->next;
	}
	
	
   return 0;
}


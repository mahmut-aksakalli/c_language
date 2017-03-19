#include<stdio.h>
#include<stdlib.h>

struct login{
	int flag;
	
};
struct database{
	char user;
	int pass;
};
void login(struct database user,struct login *flag);
int main (){
	int i;
	struct database kullanici,*kp;
	struct login flag;
	kp=&kullanici;
	printf("*--Kemik  Login Zone --*\n\n");
login:	
	printf("Username : ");
	scanf("%c",&kp->user);
	printf("Password : ");
	scanf("%d",&kp->pass);
	
	login(kullanici,&flag);	
	if(flag.flag==1){
		printf("Connection Successful !! Welcome %c",kp->user);
	}else{
		printf("Login Failed\n");	
		goto login;
	}	
}

void login(struct database data,struct login *flag){
	if(data.user=='k' && data.pass == 1){
		flag->flag=1; 
	}else{
		flag->flag=0;
	}
}

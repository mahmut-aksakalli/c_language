#include <stdio.h> 

int ebob(int x,int y){ 
if (y == 0)
	return x;
else
	return ebob(y, x % y);
}
	
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",ebob(a,b));
	
	
return 0; 
}



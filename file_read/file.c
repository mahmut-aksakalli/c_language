#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,c[20][3];
float n[18][2];
	
FILE *connectivity, *ncoords;

connectivity = fopen("connectivity.txt","r");

for(i=0;i<20;i++){
		fscanf(connectivity,"%d %d %d",&c[i][0],&c[i][1],&c[i][2]);
		printf("%d %d %d \n",c[i][0],c[i][1],c[i][2]);
}
fclose(connectivity);

ncoords = fopen("ncoords.txt","r");

for(i=0;i<18;i++){		
		fscanf(ncoords,"%f %f",&n[i][0],&n[i][1]);
		printf("%.2f %.2f \n",n[i][0],n[i][1]);
}
fclose(ncoords);

}

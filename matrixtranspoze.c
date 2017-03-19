#include <stdio.h> 

int main() { 

int i,j,row,col;

printf("Enter Row-Col Number ");
scanf("%d %d",&row,&col);
int arr[row][col],trans[col][row];

for(i=0;i<row;++i) 
for(j=0;j<col;++j){ 
	printf("arr%d%d",i,j);
	scanf("%d",&arr[i][j]);
} 
for(i=0;i<row;++i){
for(j=0;j<col;++j){ 
	printf("%d\t",arr[i][j]);

} 
	printf("\n");	
} 

for(i=0;i<row;i++){
for(j=0;j<col;j++){ 
	trans[j][i] = arr[i][j];

} } 
printf("\n");
for(i=0;i<col;i++){
for(j=0;j<row;j++){ 
	printf("%d \t",trans[i][j]);

} 
	printf("\n");	
} 
	
return 0;
}


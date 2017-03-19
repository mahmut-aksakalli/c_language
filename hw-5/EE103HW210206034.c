#include<stdio.h>
#include<stdlib.h>
double *multiply_matrices(double *mat1, double *mat2,int NR1,int NC1,int NR2,int NC2);

int main(int argc, char **argv)
{
/*Variable declarations here */
FILE *fp,*fpo;
int NR1,NC1,NR2,NC2,i,j;
double *mat1,*mat2,*mat_result;

fp=fopen(argv[1],"r");
fscanf(fp,"%d %d \n",&NR1,&NC1);
fscanf(fp,"%d %d \n",&NR2,&NC2);

mat1=malloc(NR1*NC1*sizeof(double));
mat2=malloc(NR2*NC2*sizeof(double));


for(i=0;i<NR1;i++) for(j=0;j<NC1;j++) fscanf(fp,"%lf",&mat1[i*NC1+j]);
for(i=0;i<NR2;i++) for(j=0;j<NC2;j++) fscanf(fp,"%lf",&mat2[i*NC2+j]);
fclose(fp);

mat_result=multiply_matrices(mat1,mat2,NR1,NC1,NR2,NC2);
free(mat1);
free(mat2);

fpo=fopen("matrix_output.txt","w");
for(i=0;i<NR1;i++){
	for(j=0;j<NC2;j++){
		fprintf(fpo,"%.0lf\t",mat_result[i*NC2+j]);	
	}
		fprintf(fpo,"\n");
}

fclose(fpo);

return 0;
} 

double *multiply_matrices(double *mat1, double *mat2,int NR1,int NC1,int NR2,int NC2){ 
double *out_matrix;
out_matrix=malloc(NR1*NC2*sizeof(double));
int i,j,k,sum;
	for(i=0;i<NR1;i++){
		for(j=0;j<NC2;j++){
			sum=0;
			for(k=0;k<NC1;k++){
				sum+=mat1[i*NC1+k]*mat2[k*NC2+j];
			}
		out_matrix[i*NC2+j]=sum;
		}
	}
	
 return (out_matrix);
}

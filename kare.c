#include<stdio.h>
int main()
{
int row,i,j;	
	printf("bi deger gir uleyn");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			printf("* ");
		}
		
		printf("\n");
		
	}
	return 0;
}

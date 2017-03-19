#include<stdio.h>
#include<math.h>

int main( void )
{
	float r1,r2,r3,voltage,current,i;
	int iceil;
	
	printf("Write 3 resistor values:");
	scanf("%f %f %f",&r1,&r2,&r3);
	printf("Write supply voltage value:");
	scanf("%f",&voltage);
	
	current = voltage/(r1+((r2*r3)/(r2+r3)));	
	i = (r2*current)/(r2+r3);
	printf("1)Current through R3 resistor as decimal format : %.2f \n",i);
	
	iceil = ceil(i);
	printf("2)Current through R3 resistor as integer format : %d",iceil);
	
	return 0;
}


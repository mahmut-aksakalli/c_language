#include<stdio.h>

int fibonacci( int );
int main( void )
{
	int i;
	// Fibonacci serisinin ilk 10 elemani
	// yazilacaktir.
	for( i = 0; i < 10; i++ ) {
		
		printf( "%d  ",fibonacci( i ) );
}
	return 0;
}
int fibonacci( int eleman_no )
{
	if( eleman_no > 1 ) {
		return fibonacci( eleman_no - 1 ) + fibonacci( eleman_no - 2 ) ;
	}
	else if( eleman_no == 1 )
		return 1;
	else if(eleman_no ==0)
		return 0;
} 

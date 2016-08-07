#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int calificacion;
	
	if ( calificacion >= 90 )
printf( "A\n" );
else
if ( calificacion >= 80 )
printf( "B\n" );
else
if ( calificacion >= 70 )
printf( "C\n" );
else
if ( calificacion >= 60 )
printf( "D\n" );
else
printf( "F\n" );
	
	return 0;
}

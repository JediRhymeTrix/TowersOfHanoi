/*
 *	Towers of Hanoi - RECURSIVE METHOD
*/

#include <stdio.h>

 // Global varianbles:

int n = 3;	// number of rings

char f = 'A';	// 'from' 
char s = 'B';	// 'spare'
char t = 'C';	// 'to'

 //

 // Method Prototypes:

void printStep( char, char );			// prints the required steps to solve the towers
void Towers( int, char, char, char );	// algorithm to move the discs lies in this method

 //

void main()
{
	Towers( n, f, t, s );	
}

void printStep( char f, char t )
{
	printf("Move from %c to %c \n", f, t );
}

void Towers( int n, char f, char t, char s ) // Args: [int] number of rings | [char] 'from' tower | [char] 'to' tower | [char] 'spare' tower 
{
 	if ( n == 1 ) printStep( f, t );

	else
	{
 		Towers( n - 1 , f, s, t );	// recursive call to move ( n - 1 ) rings from 'from' to 'spare' tower - 'to' becomes spare
 		Towers( 1, f, t, s );		// recursive call to move 1 ring from 'from' to 'to' tower - 'spare' becomes spare
 		Towers( n - 1 , s, t, f );	// recursive call to move ( n - 1 ) rings from 'spare' to 'to' tower - 'from' becomes spare
 	}
}
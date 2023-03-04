#include "fonctions.h"



void Add(int a, int b, int &result)
{
	// add two numbers and return the result through a reference parameter
	result = a + b ;
}

void Factorial(int a, int &result)
{
	// find factorial of a number and return that through a reference parameter
	int i ;
	int l = a ;
	for(i=1 ; i < l ; i++)
	{
		a = a * i ;
	}
	result = a ;

}

void Swap(int &a, int &b)
{
	// swap two numbers through reference arguments
	int a2 = a ;
	a = b ;
	b = a2 ;

}

void badSwap(int x, int y)
{
	// does not swap two numbers because the x and y here are copied.
	int temp = x ;
	x = y ;
	y = temp ;
}





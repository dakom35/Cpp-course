#include "fonctions.h"


int Add(int* a, int* b) // Add two numbers and return the sum
{

	int c = *a + *b ;

	return c ;
}

void AddVal(int *a, int *b, int* result) // Add two numbers and return the sum through the third pointer argument
{

	*result = *a + *b ;

}

void Swap(int* a, int* b)
{
	int c = *a ; // stores value of a in c
	*a = *b ;
	*b = c ; // set value of b as c

}

void Factorial(int* a, int* result) // Generate the factorial of a number and return that through the second pointer argument
{
	int i ;
	int limit = *a ;
	*result = 1 ;
	//std::cout << "*a = " << *a << std::endl ;
	for(i=1; i<= limit ; i++)
	{
		*result = *result * i ;
	}

}

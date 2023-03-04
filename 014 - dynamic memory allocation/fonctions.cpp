#include "fonctions.h"


int* createPointer()
{
	int *p = new int ;
	return p;

}

int* createPointerToZero()
{
	int *p = new int(0) ;
	return p;

}

int* createArray(int size)
{
	int *p = new int[size];
	for(int i=0 ; i < size ; i++)
	{
		*(p+i) = 0 ;
	}
	return p ;
}

void displayArray(int* arr,int size)
{
	for(int i=0 ; i < size ; i++)
	{
		std::cout << *(arr) ;
		arr++;
	}
	std::cout << std::endl ;
}

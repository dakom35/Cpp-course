//============================================================================
// Name        : 010.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

// #define Square(x) x*x // macro to avoid the overhead of the function call but causes bugs
inline int Square(int x)
{
	return x * x ;

}

int main(void) {
	using namespace std ;
//	int val = 6 ;
//	int result = Square(val+1) ;
//	cout << result << endl ;

	//============================================================================
	//
	// Function pointers
	//
	//============================================================================
//
//	Print(5,'#');
//	void(*pfn)(int,char) = &Print ;
//	(*pfn)(8,'@');
//	pfn(5,'+');
//	atexit(EndMessage);
//	cout << "end of main " << endl ;

	//============================================================================
	//
	// Namespaces
	//
	//============================================================================


	cout << Avg::Calculate(14.54789f,7.91326f) << endl ;
	cout << Basic::Calculate(14.51654f,7.94874513f) << endl ;
	return EXIT_SUCCESS;
}

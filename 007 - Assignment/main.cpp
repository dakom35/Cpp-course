#include "fonctions.h"

int main(){
	using namespace std ;

	cout << "Hello" << endl ;
	int x,y,res ;
	int *a = &x  ;
	int *b = &y ;
	x = 10 ;
	y = 20 ;

	res = Add(a, b) ;
	cout << "res = " << res << endl ;

	x = 2 ;
	y = 5 ;

	int* result = &x ; // i take x memory address just to have a valid memory address
	//cout << "*a = " << *a << " *b = " << *b << endl ;
	//AddVal(a,b,result);

	//cout << "*result = " << *result << endl ;

	cout << "*a = " << *a << " *b = " << *b << endl ;
	Swap(a,b);
	cout << "*a = " << *a << " *b = " << *b << endl ;

	x = 4 ;
	cout << "*a = " << *a  << endl ;
	Factorial(a,result);
	cout << "*result = " << *result << endl ;
	return 0 ;

}

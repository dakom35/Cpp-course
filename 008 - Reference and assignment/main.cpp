#include "fonctions.h"

int main(){
	using namespace std ;

	// TOY EXAMPLE //////////////////////

	cout << "Hello" << endl ;
	int x = 10 ;
	int &ref = x ;
	int y = 20 ;
	ref = y ;

	cout << "x:" << x << endl ;
	cout << "ref:" << ref << endl ;
	cout << "adress of x:" << &x << endl ;
	cout << "adress of ref:" << &ref << endl ;

	// ASSIGNMENT ////////////////////

	int a = 0 ;
	int &result = a ;
	Add(2,50,result);
	cout << "result:" << result << endl ;
	cout << "a:" << a << endl ;

	Factorial(4,result);
	cout << "result:" << result << endl ;
	cout << "a:" << a << endl ;


	int c = 4 ;
	int e = 6 ;
	int &cRef = c ;
	int &eRef = e ;
	Swap(cRef,eRef);
	cout << "cRef:" << cRef << endl ;
	cout << "eRef:" << eRef << endl ;

	int val1 = 3 ;
	int val2 = 7 ;
	badSwap(val1,val2);
	cout << "val1:" << val1 << endl ;
	cout << "val2:" << val2 << endl ;

	return 0 ;

}

#include "fonctions.h"


int main(void) {
	using namespace std ;
	int* p = createPointer() ;
	int* q = createPointerToZero();
	cout << *p << endl ;
	cout << *q << endl ;
	delete p ;
	delete q ;
	p = nullptr;
	q = nullptr ;

	int* arr = createArray(5);
	displayArray(arr,5);

	return EXIT_SUCCESS;
}

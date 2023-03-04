#include "fonctions.h"
using namespace std ;


void f1()
{
	// Try to modify x1 & x2 and see the compilation output
	int x = 5 ;

	int &ref_x1 = x ;

	ref_x1 = 6 ;
	x = 22 ;
	cout << "ref_x1 = " << ref_x1 << endl ;
	cout << "x = " << x << endl ;
	cout << "exiting f1" << endl ;
	// ref_x2 = 5 ; // impossible to modify
}

void f2()
{
	// try to modify the pointer (e.g ptr1) and the pointer value (e.g *ptr1)
	int x = 42 ;
	int y = 66 ;
	int* ptr4 = &y ;
	const int *ptr1 = &x ; // the value where ptr1 points is not modifiable but the adress is
	int *const ptr2 = &x ; // the value where ptr2 points is modifiable, but not the adress
	//const int** ptr5 = &ptr1 ;
	cout << "ptr1 = " << ptr1 << endl ;
	cout << "*ptr1 = " << *ptr1 << endl ;
	ptr1 = ptr4 ;
	cout << "ptr1 = " << ptr1 << endl ; // successful modification of ptr1
	cout << "*ptr1 = " << *ptr1 << endl ;
	cout << "&x = " << &x << endl ;
	ptr1 = &x ;
	// *ptr1 = *ptr4 ; // unsuccessful modification of ptr1
	//ptr1[0] = ptr4[0] ; // unsuccessful modification of *ptr1
	cout << "*ptr1 = " << *ptr1 << endl ;
	// ptr2 = ptr4 ; unsuccessful modification of ptr2
	*ptr2 = *ptr4 ;
	cout << "ptr2 = " << ptr2 << endl ;
	cout << "*ptr2 = " << *ptr2 << endl ;
	cout << "exiting f2" << endl ;
}


void f3()
{
	// Find which declarations are valid. If invalid, correct the declaration
	const int MAX = 12 ;
	int x = 5 ;
	const int *ptr1 = &x ;
	int *const ptr2 = &x ;
	int &ref_x1 = x ;
	const int &ref_x2 = x ;

	const int *ptr3 = &MAX ;

	const int &r1 = ref_x1 ; // makes a copy of ref_x1 but r1 cannot be directly modified
	//r1 = 2 ; // impossible
	ref_x1 = 3 ;
	x = 42 ;
	//int &r2 = ref_x2 ; // implicitly asks to remove constness of ref_x2 so impossible
	cout << "ref_x1 = " << ref_x1 << endl ;
	cout << "r1 = " << r1 << endl ;

	//int* &p_ref1 = ptr1 ; // cannot bind rvalue '(int*)ptr1' to 'int*&'
	//const int* &p_ref2 = ptr2 ; // cannot bind non-const lvalue reference of type 'const int*&' to an rvalue of type 'const int*'



	cout << "exiting f3" << endl ;
}

void f4()
{
	auto i = 10 ;
	auto j = 42*4 ;
	auto val = 42.344f;
	auto val2 = i + val ;
}

void f5()
{
	// Goal : Understand the difference between const int *ptr1 and int *const ptr2
	// Method : read the declaration from right to left

	int x = 64 ;
	int y = 256 ;
	const int *ptr1 = &x ; // ptr1 is a pointer to an integer of type const
	// ptr1 can point to other variables if you modify it
	// but you cannot modify x through ptr1
	int *const ptr2 = &x ; // ptr2 is constant pointer to an integer
	// ptr2 will always point towards x
	// but you can modify the value of x through ptr2
	cout << "ptr1 = " << ptr1 << endl ;
	cout << "*ptr1 = " << *ptr1 << endl ;
	*(ptr2) = 16 ;
	// ptr2 = &(y) ; // => impossible !
	cout << "x = " << x << endl ;
	ptr1 = &(y) ; // redirection : no problem !
	// *(ptr1) = 1024 ;// => impossible !
	cout << "*(ptr1) = " << *(ptr1) << endl ;

}


//int x = 5 ;
//const int &ref_x2 = x ;

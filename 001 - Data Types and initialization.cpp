//============================================================================
// Name        : First.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	// Scalar types
	using namespace std;
	int i = 0 ;
	int j {142} ; // uniform initialization
	char ch = 'a' ;
	bool flag = true ; // true or false
	float f = 1.283f ;
	double d = 521.342 ;

	// Vector types
	int arr[5] ;
	int arr1[5] = {1,2,3,4,5} ;
	int arr2[5] {3,4,3,4,3} ; // uniform initialization


	// Display
	cout << "i = " << i << endl;
	cout << "j = " << j  << endl ;
	cout << "ch = " << ch  << endl ;
	cout << "flag = " << flag  << endl ;
	cout << "f = " << f << endl ;
	cout << "d = " << d  << endl ;
	cout << "arr = " << arr  << endl ;
	cout << "arr1 = " << arr1  << endl ;
	cout << "arr2 = " << arr2  << endl ;

	return 0;
}

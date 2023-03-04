#include <string>
#include <iostream>

int main (){
	int a1 ; // Uninitialized
	int a2 = 0 ; // copy initialization
	int a3(5) ; // Direct initialization
	std::string s1 ; // initialized because the library std does it
	std::string s2("C++");

	// below are all copy initialization
	char d1[8] ; // Uninitialized
	char d2[8] = {'\0'} ;
	char d3[8] = {'a','b','c','d'} ; //aggregate initialization
	char d4[8] = {"abcd"} ;



//	std::cout << "a3 = " << a3 << std::endl ;
//	std::cout << "s2 = " << s2 << std::endl ;
//	std::cout << "d2 = " << d2 << std::endl ;
//	std::cout << "d3 = " << d3 << std::endl ;
//	std::cout << "d4 = " << d4 << std::endl ;

	// uniform initializations below

	int b1{} ; // value initialization
	int b3{5} ; // direct initialization
	char e1[8]{} ;
	char e2[8]{"Hello"} ;
	int* p1 = new int{} ;
	char* p2 = new char[8]{} ; // corresponding ascii symbol = NUL

	std::cout << "b1 = " << b1 << std::endl ;
	std::cout << "b3 = " << b3 << std::endl ;
	std::cout << "e1 = " << e1 << std::endl ;
	std::cout << "e2 = " << e2 << std::endl ;
	std::cout << "p1 = " << p1 << std::endl ;
	std::cout << "*p1 = " << *p1 << std::endl ;
	std::cout << "p2 = " << p2 << std::endl ;
	std::cout << "*p2 = " << *p2 << std::endl ;

}




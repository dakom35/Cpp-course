#include "fonctions.h"
using namespace std ;


void classicForLoop()
{
	int arr[] = {1,2,3,4,5} ;
	for(int i = 0 ; i < 5 ; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl ;
	return ;
}

void rangeBasedForLoop()
{
	int arr[] = {1,2,3,4,5} ;
	for(int x : arr)
	{
		cout << x << " " ;
	}
	cout << endl ;
	return ;
}

void accessArrayThroughPointers()
{
	int arr[] = {1,2,3,4,5} ;
	int* begin = &arr[0] ;
	int* end = &arr[5] ;
	while(begin != end)
	{
		cout << *begin << " " ;
		begin++;
	}
	cout << endl ;
}

void accessArrayThroughPointersv2()
{
	int arr[] = {1,2,3,4,5} ;
	int* begin = std::begin(arr);
	int* end = std::end(arr);
	while(begin != end)
	{
		cout << *begin << " " ;
		begin++;
	}
	cout << endl ;
}

void rangeBasedForLoopHiddenMechanism()
{
	int arr[] = {1,2,3,4,5} ;
	auto range = arr ;
	auto begin = std::begin(arr) ;
	auto end = std::begin(arr);

	for(; begin !=end ; ++begin)
	{
		auto v = *begin ;
		cout << v << " " ;
	}
	return ;
}



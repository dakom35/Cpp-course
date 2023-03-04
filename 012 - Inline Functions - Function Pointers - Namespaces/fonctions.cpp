#include "fonctions.h"
using namespace std ;

//int Square(int x)
//{
//	return x * x ;
//
//}

//============================================================================
//
// Function pointers
//
//============================================================================

void Print (int count, char ch)
{
	using namespace std ;
	for(int i = 0 ; i < count ; ++i)
	{
		cout << ch ;
	}
	cout << endl ;
	return ;
}

void EndMessage()
{
	using namespace std;
	cout << "End of program" << endl ;
}

//============================================================================
//
// Namespaces
//
//============================================================================


namespace Avg
{
	float Calculate(float x, float y)
	{
		return (x+y)/2  ;
	}
}

namespace Basic{
	float Calculate(float x, float y)
	{
		return x + y ;
	}
}







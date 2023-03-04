#include "fonctions.h"

int* allocateN(int N)
{
	int *p = (int*)calloc(N,sizeof(int));
	if (p ==NULL) {
		printf("Failed to allocate memory, N probably too big !\n");
		return -1 ;
	}
	printf("Allocation successful !\n");
	return p ;
}






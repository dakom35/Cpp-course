
#include "fonctions.h"


int main(void) {

	int *p = (int*)malloc(sizeof(int));
	*p = 5 ;
	int *q = (int*)calloc(1, sizeof(int)); // first argument is the number of elements you want to store
	*q = 42 ;
	printf("%d\n", *p);
	printf("%d\n", *q);
	free(p); // at this
	//free(p) ; // causes crash if uncommented

	p = NULL ;
	free(p); // ignored because p is NULL
	// printf("%d", *p); // not ignored : causes crash

	// How-to : check if malloc was successful
	int *s = allocateN(12);
	int *d = allocateN(1200);
	int *f = allocateN(120000);
	int *g = allocateN(12000000);
	int *h = allocateN(1200000000);
	int *j = allocateN(4000000000); // too big !



	return 0;
}

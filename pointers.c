#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 2; /* variable declaration */
	int *xptr; /* pointer variable declaration */

	xptr = &x; /* store address of x in pointer variable*/

	printf("%p\n", &x);
	printf("%d\n", *xptr);

	return 0;
}

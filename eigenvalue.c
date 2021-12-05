#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* This code finds the eigenvalues of a 2x2 matrix */

int main(){

	double array[2][2] = {
		{0,1},
		{1,0}
	};

	double b,c,e1,e2, test;

	b = -array[0][0] - array [1][1];
	c = -(array[0][1]*array[1][0]) + array[0][0]*array[1][1];

	e1 = -b + pow((b*b - 4*c),0.5)/(2);
	e2 = -b - pow((b*b - 4*c),0.5)/(2);
	printf("the eigenvalues are %f and %f", e1, e2);


}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
	int size = 5;
	int array[5] = {1,2,3,4,5};
	int i = 0; 
	int j ;
	/* length of array */
	j = sizeof(array)/sizeof(int);
	float array2[j];

	printf("Array elements: \n");
	for (i=0; i < j; ++i){
		array2[i] =  pow(array[i],2);
		printf("%f\n", array2[i]);
	}


}
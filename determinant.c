#include <stdio.h>
#include <stdlib.h>

int main(){

	double array[2][2] = {
		{1,2},
		{3,4}
	};

	double det;
	int i,j;

	for(i=0; i<2; ++i){
		for(j=0; j<2; ++j){
			printf("array[%d][%d]= %f\n",i,j,array[i][j]);
		}
	}

	det = array[0][0]*array[1][1] - array[1][0]*array[0][1];

	printf("Determinant is %f",det);

}
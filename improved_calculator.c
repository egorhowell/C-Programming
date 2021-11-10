#include <stdio.h>
#include <stdlib.h>

int main(){

	double num1;
	double num2;
	char oper;

	printf("enter a number");
	scanf("%lf", &num1);

	printf("enter a second number");
	scanf("%lf", &num2);

	printf("enter the operation you want to do");
	scanf(" %c", &oper);

	if (oper == '+'){

		printf("%f", num1+num2);
	} else if(oper == '-'){

		printf("%f", num1 - num2);
	} else if(oper == '/'){

		printf("%f", num1/num2);
	} else if(oper == '*'){

		printf("%f", num1*num2);
	} else{
		printf("Enter a valid operator");
	}
}
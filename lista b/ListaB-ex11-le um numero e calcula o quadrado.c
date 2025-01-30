#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float number1;
	float result;
	
	printf("Digite um numero real:");
	scanf("%f", &number1);
	
	result=number1*4;
	printf("%fX4=%f\n", number1, result);
	
	result=number1*number1;
	printf("%f^4=%f\n", number1, result);
	
	system("pause");
	return 0;
}

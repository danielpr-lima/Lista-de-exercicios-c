#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double number1;
	double number2;
	double number3;
	double result;
	
	printf("Digite um numero real:");
	scanf("%lf[^\n]\n", &number1);
	
	printf("Digite o segundo numero real:");
	scanf("%lf[^\n]\n", &number2);
	
	printf("Digite o terceiro numero real:");
	scanf("%lf[^\n]\n", &number3);
	
	result=(number1+number2+number3)/3;
	
	printf("a media de %lf, %lf, %lf e: %lf.", number1, number2, number3, result);
	
	system("pause");
	return 0;
}

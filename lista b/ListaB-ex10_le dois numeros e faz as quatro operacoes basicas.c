#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float number1;
	float number2;
	float result;
	
	printf("Digite um numero real:");
	scanf("%f[^\n]\n", &number1);
	
	printf("Digite o segundo numero real:");
	scanf("%f[^\n]\n", &number2);
	
	//adi��o
	result=number1+number2;
	printf("%f+%f=%f\n", number1, number2, result);
	
	//subtra��o
	result=number1-number2;
	printf("%f-%f=%f\n", number1, number2, result);
	
	//divis�o
	result=number1/number2;
	printf("%f/%f=%f\n", number1, number2, result);
	
	//multiplica��o
	result=number1*number2;
	printf("%fX%f=%f\n", number1, number2, result);
	
	
	system("pause");
	return 0;
}

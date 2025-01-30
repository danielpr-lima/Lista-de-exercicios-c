#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int number1;
	int number2;
	int result;
	
	printf("Digite um numero:");
	scanf("%d", &number1);
	
	printf("Digite outro numero:");
	scanf("%d", &number2);
	
	result=number1-number2;
	
	printf("%d-%d=%d\n", number1, number2, result);
	
	system("pause");
	return 0;

	
	
}

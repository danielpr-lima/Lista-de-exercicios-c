#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double number;
	
	printf("Digite um numero real:");
	scanf("%lf", &number);
	
	number=number/4;
	
	printf("%lf\n", number);
	
	system("pause");
	return 0;
}

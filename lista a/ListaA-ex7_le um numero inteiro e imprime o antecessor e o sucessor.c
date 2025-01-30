#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number1;
	int number2;
	
	printf("Digite um numero:");
	scanf("%d", &number1);
	
	number2=number1-1;
	number1=number1+1;
	
	printf("o antecessor e %d ",number2);
	printf("e o sucessor e %d.\n",number1);
	
	system ("pause");
	return 0;
}

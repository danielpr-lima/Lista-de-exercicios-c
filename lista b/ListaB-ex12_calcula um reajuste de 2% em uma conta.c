#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float conta;
	
	printf("Digite o saldo da conta:");
	scanf("%f", &conta);
	
	conta=conta+(conta*0.02);
	
	printf("O saldo com reajuste ficou:%f\n", conta);
	
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main (void)
{	
	char name[100];
	
	//le um nome
	printf("Digite seu nome: \n");
	scanf("%s", &name);
	
	//imprime um nome
	printf("%s\n", name);

	system ("pause");
	return 0;
}

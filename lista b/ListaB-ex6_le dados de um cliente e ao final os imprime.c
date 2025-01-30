#include <stdio.h>
#include <stdlib.h>

int main()
{

	char name[100];
	char address[100];
	int tel;
	
	printf("Digite o nome do cliente:");
	scanf("\n%[^\n]s", &name);
	
	printf("Digite o endereco do cliente:");
	scanf("\n%[^\n]s", &address);
	
	printf("Didite o telefone do cliente:");
	scanf("%d", &tel);
	
	printf("%s\n", name);
	printf("%s\n", address);
	printf("%d\n", tel);
	
	system("pause");
	return 0;
}

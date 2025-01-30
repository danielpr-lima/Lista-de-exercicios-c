#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char* name[100];
	int age;
	
	printf("Digite seu nome: ");
	scanf("\n%s", &name);
		
	printf("Digite sua idade: ");
	scanf("%d", &age);
	
	printf("%s\n", name);
	printf("%d\n", age);
	
	system ("pause");
	return 0;
}

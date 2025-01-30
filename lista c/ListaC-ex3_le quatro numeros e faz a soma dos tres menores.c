#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL, ("portuguese"));
	
	int A, B, C, D, resultado;
	
	printf ("qual o primeiro valor?");
		scanf("%d", &A);
	printf ("qual o segundo valor?");
		scanf("%d", &B);
	printf ("qual o terceiro valor?");
		scanf("%d", &C);
	printf ("qual o quarto valor?");
		scanf("%d", &D);
		if (A>B && A>C && A>D) {
			resultado = B+C+D;
			printf("A soma dos 3 menores é:%d\n\n", resultado);	
		}
		if (B>A && B>C && B>D) {
			resultado = A+C+D;
			printf("A soma dos 3 menores é:%d\n\n", resultado);	
		}
			if (C>A && C>B && C>D) {
			resultado = A+B+D;
			printf("A soma dos 3 menores é:%d\n\n", resultado);
		}
			if (D>A && D>B && D>C) {
			resultado = A+B+C;
			printf("A soma dos 3 menores é:%d\n\n", resultado);
		}
		system ("pause");
		return 0;
		
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main (){
		
		int Ano, resultado;
		
		setlocale(LC_ALL, "portuguese");
		printf("Quantos anos deseja saber as batidas do seu coração?\t");
		scanf("%d", &resultado);
		Ano = 31536000*resultado;
		printf ("O seu coração baterá %d vezes\n", Ano);
		
		system ("pause");
		return 0;
	} 

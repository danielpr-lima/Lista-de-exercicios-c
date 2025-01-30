#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main (){
		
		setlocale(LC_ALL, "portuguese");
		
		float polegada, milimetro, celsius, fahrenheit;
		
		printf ("Qual a temperatura em fahrenheit?\t");
		scanf("%f", &fahrenheit);
		
		celsius = (5*fahrenheit-160)/9;
		
		printf("Qual a quantidade de chuva em polegada?\t");
		scanf("%f", &polegada);
		
		milimetro = 25.4*polegada;
		
		printf("A temperatura convertida em Celsius é: %.2f\n ", celsius);
		printf("A quantidade de chuva em milimetros é: %.2f\n\n", milimetro);
		
		system ("pause");
		return 0;
		 
		
		
		
	}

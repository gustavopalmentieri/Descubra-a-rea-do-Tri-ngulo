#include <stdio.h>
#include <locale.h> 

int main () {
	
	setlocale(LC_ALL, "portuguese");
	printf (" ----------- > Descubra a �rea do Tri�ngulo < ---------------\n");
	
	float area, altura, base;
	
	printf ("\nDigite a altura do tri�ngulo: ");
	scanf ("%f", &altura);
	
	printf ("\nDigite a base do tri�ngulo: ");
	scanf ("%f", &base);
	
	area = (base * altura) / 2;
	
	printf ("\nA �rea desse tri�ngulo �: %.2f", area);
	
	return 0;
}

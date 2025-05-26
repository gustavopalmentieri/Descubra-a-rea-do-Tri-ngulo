#include <stdio.h>
#include <locale.h> 

int main () {
	
	setlocale(LC_ALL, "portuguese");
	printf (" ----------- > Descubra a Área do Triângulo < ---------------\n");
	
	float area, altura, base;
	
	printf ("\nDigite a altura do triângulo: ");
	scanf ("%f", &altura);
	
	printf ("\nDigite a base do triângulo: ");
	scanf ("%f", &base);
	
	area = (base * altura) / 2;
	
	printf ("\nA área desse triângulo é: %.2f", area);
	
	return 0;
}

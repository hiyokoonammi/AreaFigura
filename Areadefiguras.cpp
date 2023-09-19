
#include <iostream>

int main()
{
	int area;
	int altura;

	printf("Lado de un cuadrado: ");
	scanf_s("%i", &altura);

	area = altura * altura;
	printf("El cuadro de %i x %i tienen area de %i", altura, altura, area);
}

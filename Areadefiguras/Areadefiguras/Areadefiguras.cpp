
#include <iostream>

int main()
{
	int area;
	int altura;
	int base;

	printf("Altura: ");
	scanf_s("%i", &altura);
	printf("Base: ");
	scanf_s("%i", &base);

	area = base * altura;
	printf("El cuadro de %i x %i tienen area de %i", base, altura, area);
}

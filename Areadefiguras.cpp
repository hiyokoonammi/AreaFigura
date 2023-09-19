
#include <iostream>

int main()
{
	float area;
	float altura;
	float base;

	printf("Base: ");
	scanf_s("%f", &base);
	printf("Altura: ");
	scanf_s("%f", &altura);

	area = (base * altura)/2;
	printf("El triangulo de base %.2f por altura %.2f tienen area de %.2f", base, altura, area);
}

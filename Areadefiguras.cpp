
#include <iostream>

int main()
{
	float area;
	float radio;
	float pi = 3.14;

	printf("Radio: ");
	scanf_s("%f", &radio);

	area = (radio * radio) * pi;
	printf("El circulo de radio %.2f tienen area de %.2f", radio, area);
}

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	float s;
	float square;
	float volume;

	printf("Введите длину ребра тетраэдры: ");
	scanf("%f", &s);

	square = sqrt(3) * pow(s, 2);
	volume = pow(s, 3) / (6 * sqrt(2));

	printf("Площадь тетраэдры: %.2f\n", square);
	printf("Объем тетраэдры: %.2f\n", volume);

	return 0;
}
/*Calcular y almacenar el area de varios circulos */

#include <stdio.h>
#define PI 3.14159

float procesar(float r)
{
	float a;
	
	a = PI * r * r;
	return(a);
}

int main()
{
	int n, i = 0;
	float radio[100], area[100];
	float procesar(float radio);

	printf("Para PARAR introducir 0 en el Radio\n\n");
	printf("Radio = ?");
	scanf("%f", &radio[i]);

	while(radio[i]) {

		if(radio[i] < 0)
			area[i] = 0;
		else
			area[i] = procesar(radio[i]);

		printf("Radio = ?");
		scanf("%f", &radio[++i]);
	}

	n = --i;

	printf("\nRelacion de los resultados\n\n");
	for(i = 0; i <= n; ++i)
		printf("Radio = %f Area = %f\n", radio[i], area[i]);
}


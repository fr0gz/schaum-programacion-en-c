/* Areas de varios circulos*/
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
	float radio, area;
	int cont,n;
	float procesar(float radio);

	printf("¿Cuantos círculos?:");
	scanf("%d", &n);

	for(cont = 1; cont <= n; ++cont){
		printf("\nCirculo no. %d: Radio = ?", cont);
		scanf("%f", &radio);
		
		if(radio < 0)
			area = 0;
		else
			area = procesar(radio);

		printf("Area = %f\n", area);
	}
}

#include <stdio.h>
#define PI 3.14159

/*Area de un numero indeterminado de circulos */

float procesar(float r) /*defino mi funcion */
{
	float a;

	a = PI * r * r;
	return(a);
}

int main()
{
	float radio, area;
	int cont;
	float procesar(float radio);

	printf("Para PARAR, introducir 0 en el radio\n");
	printf("\nRadio = ?");
	scanf("%f", &radio);

	for (cont = 1; radio != 0; ++cont){
		if (radio < 0)
			area = 0;
		else
			area = procesar(radio);
		
		printf("Area = %f\n", area);

		printf("\nRadio = ?");
		scanf("%f", &radio);
		}
}

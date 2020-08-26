/* Area de un Circulo con comprobacion de error */

#include <stdio.h>
#define PI 3.14159

float procesar(float r) /*defino mi funcion*/
{
	float a; /*declaro mi variable local*/
	a = PI * r * r;
	return(a);
}

int main()
{
	float radio, area;
	float procesar(float radio);

	printf("Radio = ?");
	scanf("%f", &radio);

	if(radio < 0)
		area = 0;
	else
		area = procesar(radio);
		printf("Area = %f\n", area);
}


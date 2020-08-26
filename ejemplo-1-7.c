/*Area de un Circulo */
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
	float procesar(float radio);
	
	printf("Radio = ?");
	scanf("%f", &radio);
	area = procesar(radio);
	printf("Area = %f\n", area);
} 

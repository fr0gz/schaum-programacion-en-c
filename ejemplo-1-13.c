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

	struct {
		char texto[20];
		float radio;
		float area;
	} circulo[10];
	
	float procesar(float radio);

	printf("Para PARAR, introducir FIN en el identificador\n");
	printf("\nIdentificador: ");
	scanf("%s", circulo[i].texto);
	while (circulo[i].texto[0] != 'F' || circulo[i].texto[1] != 'I' 
					|| circulo[i].texto[2] != 'N') {

		printf("Radio: ");
		scanf("%f", &circulo[i].radio);

		if (circulo[i].radio < 0)
			circulo[i].area = 0;
		else
			circulo[i].area = procesar(circulo[i].radio);

		++i;
		printf("\nIdentificador: ");
		scanf("%s", circulo[i].texto);
	}

	n = --i; /* el valor mayor de i */

	printf("\n\nRelacion de resultados\n\n");
	for(i = 0; i <= n; ++i){
		printf("%s Radio = %f Area = %f\n", circulo[i].texto,
						    circulo[i].radio,
						    circulo[i].area);
		}
} 
							

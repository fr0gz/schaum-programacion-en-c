#include <stdio.h>

int main()
{
	float bruto, impuesto, neto;

	printf("Salario bruto: ");
	scanf("%f", &bruto);
	impuesto = 0.19 * bruto;
	neto = bruto - impuesto;
	printf("Impuesto: %.2f\n", impuesto); 
	printf("Salario neto: %.2f\n", neto);
}

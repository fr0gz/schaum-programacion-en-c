#include <stdio.h>

int menor(int a, int b)
{
	if(a <= b)
		return(a);
	else
		return(b);
}

int main()
{
	int cont, n, a, b, min;
	int menor(int a, int b);

	printf("¿Cuantos pares de números? ");
	scanf("%d", &n);

	for (cont = 1; cont <= n; ++cont) {
		printf("\nIntroduzca el primer numero entero: ");
		scanf("%d",&a);
		printf("Introduzca el segundo numero entero: ");
		scanf("%d", &b);

		min = menor(a, b);

		printf("El menor es %d\n", min);
	}
}


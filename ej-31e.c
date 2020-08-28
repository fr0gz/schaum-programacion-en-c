#include <stdio.h>

int menor(int a, int b)
{
	if (a <= b)
		return(a);
	else
		return(b);
}

int main()
{
	int a, b, min;
	int menor(int a, int b);

	printf("Introduzca el primer numero entero: ");
	scanf("%d", &a);
	printf("Introduzca el segundo numero entero: ");
	scanf("%d", &b);

	min = menor(a, b);

	printf("\n\nEl numero menor es: %d\n", min);
}


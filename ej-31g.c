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
	int a, b, min;
	int menor(int a, int b);

	printf("Para PARAR, introducir 0 en cada número\n");

	printf("\nIntroduzca el primer numero: ");
	scanf("%d", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%d", &b);

	while(a != 0 || b!= 0) {
		
		min = menor(a, b);
		printf("El numero menor es: %d\n", min);
		
		printf("\nIntroduzca el primer numero: ");
		scanf("%d", &a);
		printf("Introduzca el segundo numero: ");
		scanf("%d", &b);
		}
}

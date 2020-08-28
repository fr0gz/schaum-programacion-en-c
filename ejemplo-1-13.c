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
		

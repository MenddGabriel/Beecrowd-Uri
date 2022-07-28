#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main() {

	double a, b, c;
	double triangulo, circulo, trapezio, quadrado, retangulo;

	scanf("%lf %lf %lf", &a, &b, &c);

	//a área do triângulo retângulo que tem A por base e C por altura.
	triangulo = a * c / 2.0;

	//a área do círculo de raio C. (pi = 3.14159)
	circulo = pi * pow(c, 2.0);

	//a área do trapézio que tem A e B por bases e C por altura.
	trapezio = (a + b) * c / 2.0;

	//a área do quadrado que tem lado B.
	quadrado = pow(b, 2.0);

	//a área do retângulo que tem lados A e B.
	retangulo = a * b;

	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
		
	return 0;
}

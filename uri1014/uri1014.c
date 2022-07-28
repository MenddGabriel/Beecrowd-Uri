#include <stdio.h>

int main() {
	int distancia;
	double distanciaPorLitros, litros;

	scanf("%d", &distancia);
	scanf("%lf", &litros);

	distanciaPorLitros = distancia / litros;

	printf("%.3lf km/l\n", distanciaPorLitros);
	scanf("%d", distancia);
	return 0;
}

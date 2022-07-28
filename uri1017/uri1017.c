#include <stdio.h>

#define quilometrosPorLitros 12

int main(){
	
	int horasPercorida = 0;
	int quilometrosPercorido = 0;
	double litrosNecessario = 0.0;
	
	scanf("%d", &horasPercorida);
	scanf("%d", &quilometrosPercorido);
	
	litrosNecessario = (double)horasPercorida * quilometrosPercorido / quilometrosPorLitros;
	
	printf("%.3lf\n", litrosNecessario);
	
	return(0);
	
}

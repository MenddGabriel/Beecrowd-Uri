#include <stdio.h>

int main() {
	int codigoPeca1, numeroDePeca1, codigoPeca2, numeroDePeca2;
	double valorPeca1, valorPeca2, valorTotal = 0;

	scanf("%d %d %lf", &codigoPeca1, &numeroDePeca1, &valorPeca1);
	scanf("%d %d %lf", &codigoPeca2, &numeroDePeca2, &valorPeca2);

	valorTotal = numeroDePeca1 * valorPeca1 + numeroDePeca2 * valorPeca2;

	printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
}

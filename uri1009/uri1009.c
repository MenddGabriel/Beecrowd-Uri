#include <stdio.h>

int main(){
	
	char nome[11];
	double salaryFixo, vendasEfetuadas, total;
	
	// Comissão de 15% nas vendas efetuadas
	
	scanf("%s", nome);
	scanf("%lf", &salaryFixo);
	scanf("%lf", &vendasEfetuadas);
	
	total = salaryFixo + (vendasEfetuadas * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", total);
	
}

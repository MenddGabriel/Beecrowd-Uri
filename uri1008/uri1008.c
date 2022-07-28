#include <stdio.h>

int main(){
	
	int numero, horasTrabalhada;
	double valorPorHora, salario;
	
	scanf("%d", &numero);
	scanf("%d", &horasTrabalhada);
	scanf("%lf", &valorPorHora);
	
	salario = horasTrabalhada * valorPorHora;
	
	printf("NUMBER = %d\n", numero);
	printf("SALARY = U$ %.2lf\n", salario);
	
}

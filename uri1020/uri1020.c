#include <stdio.h>
 
int main() {
 
 	unsigned int dia, mes, ano;
 
    scanf("%d", &dia);
    ano = dia / 365;
    dia -= (ano * 365);
    
    mes = dia / 30;
    dia -= (mes * 30);
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
     printf("%d dia(s)\n", dia);
       
    return 0;
}

#include <stdio.h>

int main () {
 	unsigned int segundos;
 	unsigned char horas, minutos;

  	scanf("%d", &segundos);
  	horas = segundos / 3600;
  	segundos -= horas * 3600;
  	minutos = segundos / 60;
  	segundos -= minutos * 60;

  	printf("%d:%d:%d\n",horas, minutos, segundos);
}

#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main (){

double volumeEsfera;
int raio;

scanf("%d", &raio);

volumeEsfera = (4.0/3.0) * (pi * pow(raio, 3.0));

printf("VOLUME = %.3f\n", volumeEsfera);
return 0;
}

#include <stdio.h>

int main(){
	
	float A, B, C, MEDIA;
	float pesoA = 2.0;
	float pesoB = 3.0;
	float pesoC = 5.0;

	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	MEDIA = (A * pesoA + B * pesoB + C * pesoC) / (pesoA + pesoB + pesoC); 

	printf("MEDIA = %.1f\n", MEDIA);
}

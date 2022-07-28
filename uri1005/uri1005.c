#include <stdio.h>

int main(){
	
	float A, B, MEDIA;
	float pesoA = 3.5;
	float pesoB = 7.5;

	scanf("%f", &A);
	scanf("%f", &B);

	MEDIA = (A * pesoA + B * pesoB) / (pesoA + pesoB); 

	printf("MEDIA = %.5f\n", MEDIA);
}

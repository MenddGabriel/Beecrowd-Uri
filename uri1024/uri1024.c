#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

	void deslocaLetra(char *mensagem, int deslocaQuantidade); /* desloca apenas letras*/
	void inverteMensagem(char *mensagem); /* Inverte texto */
	void deslocaMetadeDaMensagem(char *mensagem, int deslocaQuantidade); /* desloca qualquer caracter da metade indiante */

	int numeroDeMensagem;
	scanf("%d", &numeroDeMensagem);

	int i;

	for (i = 0; i < numeroDeMensagem; i++)
	{
		char mensagem[1001];
		scanf(" %1000[^\n]s", mensagem);

		deslocaLetra(mensagem, 3);
		inverteMensagem(mensagem);
		deslocaMetadeDaMensagem(mensagem, -1);

		printf("%s\n", mensagem);

	}
	return 0;
}

void deslocaLetra(char *mensagem, int deslocaQuantidade) {
	int i = 0;
	while (mensagem[i] != '\0') /* le ate o final da mensagem */
	{
		if (isalpha(mensagem[i]))
		{
			mensagem[i] += deslocaQuantidade;
		}
		i++;
	}

}

void inverteMensagem(char *mensagem)
{
	int i, aux;
	int tamanho = strlen(mensagem);
	for (i = 0; i < tamanho / 2; i++)
	{
		aux = mensagem[tamanho - i - 1];
		mensagem[tamanho - i - 1] = mensagem[i];
		mensagem[i] = aux;
	}
}

void deslocaMetadeDaMensagem(char *mensagem, int deslocaQuantidade) 
{
	int i = 0;
	int truncado = strlen(mensagem) / 2;
	while (mensagem[i] != '\0') 
	{
		if (i >= truncado) {
			mensagem[i] += deslocaQuantidade;
		}
		i++;
	}
	
}

/* ler e imprimir uma string com espa�os*/
#include <stdio.h>
int main() {
	// Buffer para armazenar a string
    char texto[100]; 
    printf("Digite uma frase: ");
    /* fgets(texto, sizeof(texto), stdin);
		L� at� 99 caracteres (sizeof(texto) - 1) ou at� encontrar Enter (\n).
		Diferente de scanf("%s", texto), que s� captura at� o primeiro espa�o.*/
    // L� a string com espa�os
	fgets(texto, sizeof(texto), stdin); 
	// Exibe a string
    printf("Voc� digitou: %s", texto); 
    return 0;
}

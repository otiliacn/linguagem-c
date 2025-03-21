/* ler e imprimir uma string com espaços*/
#include <stdio.h>
int main() {
	// Buffer para armazenar a string
    char texto[100]; 
    printf("Digite uma frase: ");
    /* fgets(texto, sizeof(texto), stdin);
		Lê até 99 caracteres (sizeof(texto) - 1) ou até encontrar Enter (\n).
		Diferente de scanf("%s", texto), que só captura até o primeiro espaço.*/
    // Lê a string com espaços
	fgets(texto, sizeof(texto), stdin); 
	// Exibe a string
    printf("Você digitou: %s", texto); 
    return 0;
}

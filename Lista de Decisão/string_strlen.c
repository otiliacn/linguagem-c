/* Função strlen()
Recebe como argumento uma string e retorna um inteiro 
que é o comprimento do string.
*/
#include <stdio.h>
#include <string.h>
int main (){
  char c[50];
  int len;
  printf("Entre seu nome: ");
  gets(c);
  len = strlen(c);
  printf("Seu nome tem %d caracteres.\n", len);
  return 0; 
}

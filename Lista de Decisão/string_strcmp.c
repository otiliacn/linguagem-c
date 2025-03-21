/*Função strcmp()
Recebe como argumento duas strings e as compara, retornando um inteiro:
Se string1 = string2 -> retorna 0;
Se string1 < string2 (vem antes no dicionário) -> retorna inteiro negativo (< 0);
Se string1 > string2 (vem depois no dicionário) -> retorna inteiro positivo (> 0).*/
#include <stdio.h>
#include <string.h>
int main(){
  char palavra1[100], palavra2[100];
  int  resultado;
  printf("Entre com uma palavra: ");
  gets(palavra1);
  printf("Entre outra palavra: ");
  gets(palavra2);
  resultado = strcmp(palavra1, palavra2);
  printf("%d", resultado);
  if (resultado == 0)
    printf("Palavras iguais\n");
  else if (resultado < 0)
    printf("A primeira palavra vem antes no dicionário\n");
  else
    printf("A segunda palavra vem antes no dicionário\n");
  return 0; 
}

/*Função strcpy()
Recebe como argumento duas strings e copia a segunda string na primeira. 
Retorna ponteiro para a string resultante.*/
#include <stdio.h>
#include <string.h>
int main (){
   char str1[10] = "Brasil";
   char str2[10];
   printf("str2 = %s\n", strcpy(str2, str1));
   return 0; 
}

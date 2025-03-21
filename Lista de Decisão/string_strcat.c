/* Função strcat()
Recebe como argumento duas strings e concatena a 
segunda string na primeira. 
Retorna ponteiro para a string concatenada.*/
#include <stdio.h>
#include <string.h>
int main (){
   char str[10] = "Brasil";
   strcat(str, " 2026");
   printf("Copa do Mundo %s\n", str);
   return 0; 
}

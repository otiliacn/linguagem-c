#include<stdio.h>
int main(){
	int n, num;	
	n = 0;
	printf("Digite um valor: ");
	scanf("%d", &num);
	do{
		printf("\n%d", n);
		n++;	
	}while(n <= num);	
}

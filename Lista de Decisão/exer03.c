#include<stdio.h>
int main(){
	int n1, n2;
	printf("Entre com um valor: ");
	scanf("%d", &n1);
	printf("Entre com outro valor: ");
	scanf("%d", &n2);
	if(n1 == n2){
		printf("Os valores s�o iguais.");
	}else{
		printf("Os valores s�o diferentes");
	}
	return 0;
}

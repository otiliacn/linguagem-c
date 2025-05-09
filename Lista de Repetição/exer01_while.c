#include<stdio.h>
int main(){
	int n, num;	
	n = 0;
	printf("Digite um valor: ");
	scanf("%d", &num);
	while(n <= num){
		printf("\n%d", n);
		n++;
	}	
}

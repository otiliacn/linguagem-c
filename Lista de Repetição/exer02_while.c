#include<stdio.h>
int main(){
	int p, num;
	printf("Digite um valor: ");
	scanf("%d", &num);
	p = 0;
	while(p <= num){
		if(p % 2 == 0){
			printf("\n %d", p);
		}
		p++;
	}	
}

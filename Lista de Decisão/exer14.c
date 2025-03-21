#include<stdio.h>
int main(){
	int num;
	printf("Entre com um valor: ");
	scanf("%d", &num);
	if(num > 20){
		printf("%d eh maior do que 20");
	}else{
		printf("%d eh menor ou igual a 20", num);
	}
	return 0;
}

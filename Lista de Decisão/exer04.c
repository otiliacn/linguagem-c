#include<stdio.h>
int main(){
	int num;
	float res;
	printf("Digite um valor: ");
	scanf("%d", & num);
	if(num > 20){
		res = num / 2.0;
		printf("A metade de %d eh %.1f", num, res);
	}	
	return 0;
}

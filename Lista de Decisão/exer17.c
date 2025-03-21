 #include<stdio.h>
 int main(){
 	float salario, reaj;
 	printf("Digite o salario: R$ ");
 	scanf("%f", &salario);
 	if(salario < 500){
 		reaj = salario * 1.15;
 		printf("Novo salario R$ %.2f", reaj);
	}else{
		if(salario >= 500 && salario < 1000){
			reaj = salario * 1.10;
			printf("Novo salario R$ %.2f", reaj);
		}else{
			reaj = salario * 1.05;
			printf("Novo salario R$ %.2f", reaj);
		}
	}
 }
 

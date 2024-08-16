#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numero = 10; //atribuição de valor
	float numero2 = 6.79; 
	char letra = 'a';
	char frase[10] = "Ola mundo!";
	double numero3 = 1.23456; //variavel como precisão dupla
	
	int valor1, valor2, soma;
	
	printf("Hello World!\n");
	
	printf("Exibindo o numero inteiro: %d\n", numero);
	printf("Exibindo o numero com ponto flutuante: %f\n", numero2);
	printf("Exibindo uma letra: %c\n", letra);
	printf("%s\n", frase);
	printf("Exibindo variavel do tipo double %f\n", numero3);
	printf("Valores: %d %f %c %s %f \n",numero, numero2, letra, frase, numero3);
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &valor1); 
	
	prinf("Digite outro numero inteiro: ");
	scanf("%d", &valor2);
	
	soma = valor1 + valor2;
	
	printf("Valor da soma de %d + %d = %d", valor1, valor2, soma);
	
	
	system("pause");
	return 0;
}
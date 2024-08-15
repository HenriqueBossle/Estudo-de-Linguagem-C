#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int n = 10; //atribuição de valor
	float n2 = 6.79; 
	char letra = 'a';
	char frase[10] = "Ola mundo!";
	double n3 = 1.23456; //variavel como precisão dupla
	int valor1, valor2, soma, sub, multi, divisao, numero, resto, dia;
	float nota1, nota2, media;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	numero > 0 ? printf("Positivo\n"): printf("Negativo\n"):
	
	system("pause");
	return 0;
}

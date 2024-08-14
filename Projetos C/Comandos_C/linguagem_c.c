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
	
	/*
	printf("Hello World!\n");
	
	printf("Exibindo o numero inteiro: %d\n", n);
	printf("Exibindo o numero com ponto flutuante: %f\n", n2);
	printf("Exibindo uma letra: %c\n", letra);
	printf("%s\n", frase);
	printf("Exibindo variavel do tipo double %f\n", n3);
	printf("Valores: %d %f %c %s %f \n",n,n2,letra,frase,n3);
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &valor1); 
	
	printf("Digite outro numero inteiro: ");
	scanf("%d", &valor2);
	
	soma = valor1 + valor2;
	sub = valor1 - valor2;
	multi = valor1 * valor2;
	divisao = valor1 / valor2;
	
	printf("Valor da soma de %d + %d = %d \n", valor1, valor2, soma);
	printf("Valor da subtracao de %d - %d = %d \n", valor1, valor2, sub);
	printf("Valor da multiplicacao de %d x %d = %d \n", valor1, valor2, multi);
	printf("Valor da divisao de %d / %d = %d \n", valor1, valor2, divisao);
	
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero); 
	
	resto = numero % 2;
	
	printf("Resto da divisao: %d \n", resto);
	
	if(resto == 0){
		printf("O valor %d e par! \n", numero);
	}
	else{
		printf("O valor %d e impar! \n", numero);
	}
	
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	
	media = (nota1 + nota2) / 2;
	
	printf("Media = %.1f \n", media);
	
	if(media >= 6){
		printf("Aluno aprovado\n");
	}
	else{
		if (media < 3){
			printf("Aluno reprovado \n");
		}
		else{
			printf("Aluno em recuperacao!\n");
		}
		
	}
	*/
	
	printf("Digite um numero de 1 a 7: \n");
	scanf("%d", &dia);
	
	switch(dia){
		case 1 :
			printf("Domingo\n");
		break;
		
		case 2 :
			printf("Segunda\n");
		break;
		
		case 3 :
			printf("Terça\n");
		break;
		
		case 4 :
			printf("Quarta\n");
		break;
		
		case 5 :
			printf("Quinta\n");
		break;
		
		case 6 :
			printf("Sexta\n");
		break;
		
		case 7 :
			printf("Sabado\n");
		break;
		
		default :
			printf("Valor invalido!\n");
	}
	
	
	system("pause");
	return 0;
}

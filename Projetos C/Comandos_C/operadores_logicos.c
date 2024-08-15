#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int n = 10; //atribuição de valor
	float n2 = 6.79; 
	char letra = 'a';
	char frase[10] = "Ola mundo!";
	double n3 = 1.23456; //variavel como precisão dupla
	int valor1, valor2, soma, sub, multi, divisao, numero, resto, dia;
	float nota1, nota2, media, freq;
	
	
	printf("Digite a frequencia: \n");
	scanf("%f", &freq);
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	
	media = (nota1 + nota2) / 2;
	
	printf("Media = %.1f \n", media);
	printf("Frequencia = %.f \n", freq);
	
	if(media >= 6 && freq >= 75){
		printf("Aluno aprovado\n");
	}
	else{
		if (media < 3 || freq < 75){
			printf("Aluno reprovado \n");
		}
		else{
			printf("Aluno em recuperacao!\n");
		}
		
	}
	
	  system("pause");
	  return 0;
	
	
	}

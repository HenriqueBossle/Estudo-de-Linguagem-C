#include<stdio.h>
#include<stdlib.h>


int main(void){
	
    struct fichaAluno{
    	int matricula;
    	float nota1;
    	float nota2;
	};
	
	struct fichaAluno aluno;
	
	printf("Numero de matricula ..:");
	scanf("%d", &aluno.matricula);
	
	printf("Informe a 1a nota ..:");
	scanf("%f", &aluno.nota1);
	
	printf("Informe a 2a nota ..:");
	scanf("%f", &aluno.nota2);
	
	printf("\n\n------Lendo os dados da struct-----\n\n");
	printf("Matricula .........: %d\n", aluno.matricula);
	printf("Nota da prova 1 ...: %.2f\n", aluno.nota1);
	printf("Nota da prova 2 ...: %.2f\n\n", aluno.nota2);
	
	
	
	system("pause");
	return 0;
	
	}

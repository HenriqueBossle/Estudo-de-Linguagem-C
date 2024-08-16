#include<stdio.h>
#include<stdlib.h>

int multiplicar(int pn1, int pn2){
	int res;
	res = pn1 * pn2;
	return(res);	
	}
	
int main(void){
	
	int v1, v2, resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &v1);
	printf("Digite o segundo valor: ");
	scanf("%d", &v2);
	
	resultado = multiplicar(v1, v2);
	
	printf("Resultado = %d\n\n", resultado);
	
    system("pause");
	return 0;
	
	}

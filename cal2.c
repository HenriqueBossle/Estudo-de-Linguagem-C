#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n1, n2, op;
	
	printf("Digite 1 para soma e 2 para subtrair: \n");
	scanf("%d", &op);
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);
	
	if (op == 1){
		n1 = n1 + n2;
		
		printf("O resultado da soma e %d", n1);
	}
	
	else{
		n1 = n1 - n2;
		
		printf("O resultado da subtracao e %d", n1);
	}
	
	return 0;
	
}

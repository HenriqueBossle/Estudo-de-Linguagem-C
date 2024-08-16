#include<stdio.h>
#include<stdlib.h>

int main(void){
	
    int matriz[3][3], i, j;
    
    printf("\nDigite um valor para a matriz\n\n");
    
    for (i = 0; i < 3; i++){
    	for (j = 0; j < 3; j++){
    		printf ("\nElemento [%d][%d] = ", i, j);
    		scanf("%d", &matriz[ i ][ j ]);
		}
	}
	
	printf("\n\n------ Saida de dados ------\n\n");
	
	for (i = 0; i <3; i++){
		for (j = 0; j < 3; j++){
			printf("\nElemento [%d][%d] = %d\n", i, j, matriz[ i ][ j ]);
		}
	}
	
	system("pause");
	return 0;
	
	}

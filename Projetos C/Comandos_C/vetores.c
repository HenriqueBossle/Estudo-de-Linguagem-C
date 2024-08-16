#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	float v1[4] = {7.1, 8.4, 9.5, 5.2};
	
	printf("Exibindo os Valores do vetor \n\n");
	//printf("v1[0] = %.1f\n", v1[0]); 
	//printf("v1[1] = %.1f\n", v1[1]); 
	//printf("v1[2] = %.1f\n", v1[2]); 
	//printf("v1[3] = %.1f\n", v1[3]); 
	
	int i;
	
	for(i = 0; i < 4; i++){
		printf("v1[%d] = %.1f\n", i, v1[i]); 
	}
	
	system("pause");
	return 0;
	
	}

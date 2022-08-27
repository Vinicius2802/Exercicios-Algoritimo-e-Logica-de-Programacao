#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv){

	float matriz[5][3];
	int i,j;
	float somaPar,somaImpar,d;


	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++){
			printf("\nDigite os valores da matrizriz:\n");
			scanf("%f", &matriz[i][j]);
		}
	}

	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++){
			if(j % 2 != 0){
				somaPar += matriz[i][j] / 5;
			}else if((i+1) % 2 != 0){
				somaImpar += matriz[i][j] / 9;			
			}
		}
	}

	printf("\n A média dos elementos das colunas pares é: %f\n", somaPar);
	printf("\n A média dos elementos das linhas ímpares é: %f\n", somaImpar);

	d = somaPar - somaImpar;
	printf("\n A diferença entre as duas médias é de: %f\n\n", d);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv){

	int v[10] = {2,25,4,3,8,15,72,99,12,10};
	int i;
	int m;
	int s;
	int p;


	for(int i = 0; i < 10; i++){
		printf("%d\n", v[i]);
	}

	soma = v[0] + v[1] + v[2] + v[3] + v[4] + v[5] + v[6] + v[7] + v[8] + v[9];
	m = s / 10;

	printf("\nA média dos valores é: %d\n", m);

	for(int i = 0; i < 10; i++){
		if(m == v[i]){
			printf("\nA média é igual ao valor: %d do vetor\n", v[i]);
		}
	}
    
	return 0;
}
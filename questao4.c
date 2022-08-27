#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main() {
    
    int valor1,valor2,i,passo;

    printf("Por favor informe o primeiro valor: ");
    scanf("%i",&valor1);

    printf("Por favor informe o segundo valor: ");
    scanf("%i",&valor2);


    if (valor1 == valor2){
    printf("valores iguais\n\n");
    }

    else {
        if (valor1 < valor2) {
            printf("O primeiro valor é menor que o segundo \n\n");
    
            for (i = valor1; i <= valor2; i++) {
                printf("%i \n",i);
            }
        } 
  
        else {
            printf("O primeiro valor é maior que o segundo \n\n");
    
            for (i = valor1; i >= valor2; i--) {
            printf("%i \n", i);
            }
        }
    }
}
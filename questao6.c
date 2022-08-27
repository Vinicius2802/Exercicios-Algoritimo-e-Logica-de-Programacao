#include <stdio.h>

int main() {

    int valor;
    
    printf("Entre com um valor: ");
    scanf("%i", &valor);

    if (valor >= 100) {
    valor *= 1.2;
    } 
    
    else {
    valor *= 1.1;
    }

    printf("%d", valor);
}
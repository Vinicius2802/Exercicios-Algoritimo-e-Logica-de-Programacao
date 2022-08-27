#include<stdio.h>

int main() {
    
    int n, nA, nB, i;

    printf("Entre com o número 1: ");
    scanf("%i",&n);

    nA = n;
    nB = n;

    for (i = 1; i < 10; i++) {
    
        printf("\nEntre com o número %d: ",i+1);
        scanf("%i", &n);

        if (n > nA)
        nA = n;
    
        else
        if (n < nB)
        nB = n;
    }
    
    printf("\nO maior número é: %d", nA);
    printf("\nO menor número é: %d", nB);
}
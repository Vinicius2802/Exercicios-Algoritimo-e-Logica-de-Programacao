#include<stdlib.h>
#include<stdio.h>

int main(void) {
    
    int a = 0;

    printf(".");

    for ( a = 0; a < 88; a++ ) {
        printf("Decimal: %o\tHexadecimal: %x\t\t", a, a);

        if (a > 32)
        printf("Caractere: %c",a);

        printf("\n");
    }
    
    return 0;
}

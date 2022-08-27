#include<stdio.h>
#include<math.h>

int main() {
    
    float metros, decimetros, centimetros, milimetros;

    printf("Entre com o valor em metros: ");
    scanf("%f", &metros);

    decimetros = metros * 10;

    centimetros = metros * 100;

    milimetros = metros * 1000;

    printf("O valor em decimetros é: %f decimetros, \nO valor em centimetros é: %f centimetros, \nO valor em milimetros é: %f milimetros", decimetros, centimetros, milimetros);

}
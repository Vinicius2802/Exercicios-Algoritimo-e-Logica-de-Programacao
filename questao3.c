#include<stdio.h>
#include<math.h>

int main(){

   float n1, n2, soma, quadrado, produto, raiz, seno, modulo;
   int abs(int x);


   printf("Numero 1: ");

   scanf("%f", &n1);

   printf("Numero 2: ");

   scanf("%f", &n2);


   soma = n1 + n2;

   produto = n1 * (n2 * n2);

   quadrado = n1 * n1;
   
   raiz = sqrt(n1 + n2);
   
   seno = sin(n1 - n2);
   
   modulo = abs(n1);


   printf("\nA) Soma dos números é: %.2f\n\n", soma);

   printf("B) Produto do primeiro pelo quadrado do segundo é: %.2f\n\n", produto);

   printf("C) Quadrado do primeiro número é: %.2f\n\n", quadrado);
   
   printf("D) A raiz da soma dos dois números é: %.2f\n\n", raiz);
   
   printf("E) O seno da diferença do primeiro número pelo segundo é: %.2f\n\n", seno);
   
   printf("F) O módulo do primeiro número é: %.2f\n\n", modulo);

}
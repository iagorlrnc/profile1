#include <stdio.h> 
#include <stdlib.h>

int main (){
  int num1;
  int num2;
  float num3;
  int cubo;
  int soma;

  printf("Digite um numero: \n");
  scanf ("%d", &num1);
  printf("Digite outro numero: \n");
  scanf("%d", &num2);

  cubo = pow(num1,3);
  printf("O primeiro valor ao cubo eh: %d \n", cubo);
  printf("\n");
  soma = num1 + num2;
  printf("a soma dos dois numeros eh: %d \n", soma);
  printf("\n");
  num3 = num1*num2;
  printf("a multiplicacao dos dois numeros eh: %f \n", num3);
  printf("\n");
  num3 = num3 + 1;
  num1 = num2 + num3;
  printf("O resultado final eh: %d \n", num1);
  printf("e \n");
  printf("O resultado final eh: %f \n", num3);
}
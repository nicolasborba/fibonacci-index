#include <stdlib.h>
#include <stdio.h>

int fib(int n)
{

  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  return fib(n - 1) + fib(n - 2);
}

int main()
{

  int number;

  printf("Calculadora de número de Fibonacci.\n");
  printf("Qual a posição do número desejado?\n");
  printf("Insira um número e aperte ENTER.\n");
  scanf("%i", &number);

  printf("Você escolheu a posição %i. O fibonacci dessa posição é: %i\n", number, fib(number));
}
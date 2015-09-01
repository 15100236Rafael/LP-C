/* fatorial.c
* FATEC SP
* LP - Prof. Grace - 31/08/2015
* Rafael Santos - re: 15100236
* Atividade 14 - Calcula a fatorial de um número inteiro.
*/
#include <stdio.h>

int main()
{
  int n, i, fatorial;

  printf("Entre o valor de n (0 <= n < 13): ");
  scanf("%d", &n);

  fatorial = 1;

  i = 1;
  while (i <= n) {
    fatorial = fatorial * i;
    i++;
  }

  printf("%d! = %d\n", n, fatorial);

  return 0;
}
/* fatRec.c
* FATEC SP
* LP - Prof. Grace - 21/09/2015
* Rafael Santos - re: 15100236
* Atividade  25 - Calcula a fatorial de um número inteiro.
*/
#include <stdio.h>
int fat(int n)
{
    if (n)
      return n*fat(n-1)
    else return 1;
}

int main()
{
    int n;
    printf("\n\nDigite um valor para n: ");
    scanf("%d", &n);
    printf("\nO fatorial de %d e' %d", n, fat(n));
    return 0;
}
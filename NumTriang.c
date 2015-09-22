/* NumTriang.c
* FATEC SP
 * LP - Prof. Grace - 11/08/2015
 * Rafael Santos - re: 15100236
 * Calculo de numero triangular
 */
#include <stdio.h>
int main (void) {
    int n, i, t=0;
    printf("Informe n: ");
    scanf("%d", &n);
    while (n)
        t += n--;
    printf("Resultado: %d\n", t);
    getchar();
}

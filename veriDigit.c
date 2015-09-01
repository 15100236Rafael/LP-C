/* veriDigit.c
* FATEC SP
* LP - Prof. Grace - 31/08/2015
* Rafael Santos - re: 15100236
* Atividade 13 - Calcula o dígito verificador de um número e o exibe acompanhado do número.
*/
# include <stdio.h>

int main (void) {

    int n, i, s, d;

    printf("Digite o número da nova conta:\n");

    scanf("%d", &n);
    s = 0;
    i = n;
    while(i != 0) {
        s = s + i%10;
        i /= 10;
    }
    d = s % 10;

    printf("O número da conta é: %06d-%d  %d\n", n, d, s);

    return 0;
}

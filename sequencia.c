/* fatorial.c
* FATEC SP
* LP - Prof. Grace - 31/08/2015
* Rafael Santos - re: 15100236
* Atividade 11 - Calcula a soma de uma sequência de numeros.
*/
# include <stdio.h>
int main (void) {
    int num;
    int soma;
    printf("Digite uma sequência terminada por zero\n");
    scanf("%d", &num);
    do {
        soma = soma + num;
        scanf("%d", &num);
    } while (num != 0);

    printf("A soma da sequência é = %d\n", soma);
    getchar();
}

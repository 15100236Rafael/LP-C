/* printSquare.c
* FATEC SP
* LP - Prof. Grace - 31/08/2015
* Rafael Santos - re: 15100236
* Atividade 12 - Calcula o quadrado de cada item do vetor
*/

# include <stdio.h>

int main (void) {
    int i;
    int wholes[5];
    printf("Digite uma sequência de números inteiros\nQuando quiser encerrar a sequência digite 0.\n");
    i = 0;
    wholes[i-1] = 1;
    while ( wholes[i-1] != 0) {
        scanf("%d", &wholes[i]);
        i++;
    }
    i = 0;
    while ( wholes[i-1] != 0) {
        if (wholes[i] != 0) {
            printf("%d\n", wholes[i] * wholes[i]);
            i++;
        } else {
            wholes[i-1] = 0;
        }
    }

    getchar();

    return 0;

}

/* casa.c
* FATEC SP
 * LP - Prof. Grace - 20/09/2015
 * Rafael Santos - re: 15100236
 * Atividade 22 - Converte caixa alta/baixa
 */
#include <stdio.h>
#include <conio.h>

#define maiuscula(c) ((c)>='A'&& (c)<='Z'? 1:0)
#define minuscula(c) ((c)>='a'&& (c)<='z'? 1:0)
#define caps(c) (maiuscula(c)? 'A'+ (c) - 'a': (c))
#define scaps(c) (minuscula(c)? 'a'+(c) -'A': (c))

int main (void) {
    char c;
    printf("\nDigite um caracter: ");
    scanf("%c", &c);
    printf("\n Maiuscula: %c", caps(c));
    printf("\n Minuscula: %c", scaps(c));
    getchar();
}

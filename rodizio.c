/* Rodizio.c v3.0
* FATEC SP
 * LP - Prof. Grace - 20/09/2015
 * Rafael Santos - re: 15100236
 * Atividade 24 - Teste rodízio
 */
 #include <stdio.h>
 #include Rodizio.h

int main (void) {
    int placa;
    clrscr();
    printf("Placa: ");
    scanf("%d\n", &placa);
    printf("Rodizio da placa %4d: \n", placa);
    testeRodizio(placa);
    getchar();
}
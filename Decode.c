/* Decode.c
 * FATEC SP
 * LP - Prof. Grace - 11/08/2015
 * Rafael Santos - re: 15100236
 * Atividade 5 - Decodifica um caracter digitado em Hexa, asc e ocatal.
 */
 # include <stdio.h>

 int main (void) {
    char caracter;
    printf("\33[2J"); //Clear screen para unix e OsX
    //system("cls"); //Clear screen para DOS
    printf("Digite qualquer tecla para saber seu código em Octal, Hexa e Decimal\n");
    scanf("%c", &caracter);
    printf("ASC h: %x, o: %o e d: %d\n", caracter, caracter, caracter);
    getchar();
 }
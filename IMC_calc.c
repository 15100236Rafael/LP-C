/* IMC_calc.c
 * FATEC SP
 * LP - Prof. Grace - 11/08/2015
 * Rafael Santos - re: 15100236
 * Atividade 1 - IMC
 */

#include <stdio.h>
#include <math.h>

int main (void) {
    float peso,
          altura,
          IMC;
    printf("\33[2J"); //Clear screen para unix e OsX
    //system("cls"); //Clear screen para DOS
    printf("Cálculo do índice de massa corporal.");
    printf("\nPeso: ");
    scanf("%f", &peso);
    printf("Altura: ");
    scanf("%f", &altura);
    IMC = peso/(altura * altura);
    printf("\nIMC: %.2f\n",IMC);
    getchar();
 }
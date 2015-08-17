/* FAHRENHEIT_to_CELSIUS.c
* FATEC SP
 * LP - Prof. Grace - 11/08/2015
 * Rafael Santos - re: 15100236
 * Atividade 2 - Conversor de Temperatura
 */
#include <stdio.h>
#include <math.h>

int main (void) {
    double fahrenheit, celsius;

    printf("\33[2J"); //Clear screen para Unix e OSX
    //system("cls"); //Clear screen para DOS
    printf("Digite a temparatura em Fahrenheit.");
    printf("\nFº: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit-32)*(5./9.);
    printf("%.1lfCº\n", celsius);
    getchar();
}


/* FAHRENHEIT_to_CELSIUS.c
* FATEC SP
 * LP - Prof. Grace - 11/08/2015
 * Rafael Santos - re: 15100236
 * Atividade 4 - Cálculo de Consumo de gasolina
 */
# include <stdio.h>

int main (void) {
    float gas, dist, cons;

    printf("\33[2J"); //Clear screen para Unix e OSX
    //system("cls"); //Clear screen para DOS
    printf("A distância do percurso e o combustível gasto.");
    printf("\nDistância em Kilômetros: ");
    scanf("%f", &dist);
    printf("Combustível em litros: ");
    scanf("%f", &gas);
    cons = dist/gas;
    printf("\nSeu consumo foi de %.2f Km/L\n", cons);
    getchar();
}
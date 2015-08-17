/* CalcCirc.c
* FATEC SP
* LP - Prof. Grace - 11/08/2015
* Rafael Santos - re: 15100236
* Atividade 3 - Calcula Área o perímetro de um Circlo
*/

# include <stdio.h>
# define PI 3.1415

int main (void) {
    float radius, circ, area;

    printf("\33[2J"); //Clear screen para Unix e OSX
    //system("cls"); //Clear screen para DOS
    printf("Digite o raio da circunferência.");
    printf("\nRaio em cm: ");
    scanf("%f", &radius);
    circ = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\nPerímetro = %.3lfcm\n", circ);
    printf("Área = %.3fcm\n", area);

    return 0;
}
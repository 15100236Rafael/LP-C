/* macros.c
* FATEC SP
 * LP - Prof. Grace - 20/09/2015
 * Rafael Santos - re: 15100236
 * Atividade 20 - Macros
 */
#include <stdio.h>
#include <math.h>
#define soma(x,y) (x+y)
#define abs (x) (sqrt(x*x))
#define max (x,y) ((x)>(y)? (x):(y))

main()
{
    int n1 = -7;
    int n2 =  8;
    printf("\n %d ", soma(2*3, 1 + 3));
    printf("\n %d ", abs(n1));
    printf("\n %d ", max(n1, n2));
}
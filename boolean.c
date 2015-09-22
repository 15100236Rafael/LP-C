/* boolean.c
* FATEC SP
 * LP - Prof. Grace - 20/09/2015
 * Rafael Santos - re: 15100236
 * Atividade 21 - macros (boolean)
 */
#define false 0
#define true 1
#define not !
#define and &&
#define or ||
#define bool (x)((x)==1 ? "True":"False");
int main (void){
    printf("%s\n", bool(not false));
    printf("%s\n",bool(false and true));
    printf("%s\n",bool(true or false));
}
/* Rodizio.h v0.1
* FATEC SP
 * LP - Prof. Grace - 20/09/2015
 * Rafael Santos - re: 15100236
 * Atividade 24 - Teste rodízio
 */

 void testeRodizio( int plate) {
    int digito = plate%10
    if(plate<0 || placa >9999)
        printf("Placa inválida");
    else
        switch(digito){
            case 1:
            case 2:
                printf("Segunda feira\n");
                getchar();
                break;
            case 3:
            case 4:
                printf("Terça feira\n");
                getchar();
                break;
            case 5:
            case 6:
                printf("Quarta feira\n");
                getchar();
                break;
            case 7:
            case 8:
                printf("Quinta feira\n");
                getchar();
                break;
            default:
                printf("Sexta feira\n");
        }

 }

//
//  LP-Fatec-2015.c
//  
//
//  Created by Rafael on 27/09/15.
//
//

#include <stdio.h>

int main(void){
    long int L;

    printf("Digite o número de lados do polígono:\n");
    scanf("%ld",  &L);
    if (L < 4) {
        printf("Polígonos têm mais de 3 lados\n");
        getchar();
        printf("Digite o número de lados do polígono:\n");
        scanf("%ld",  &L);
    }
    printf("O número de diagonais para um polígono com %ld lados é: %ld\n", L, (L*(L - 3)/2));
}



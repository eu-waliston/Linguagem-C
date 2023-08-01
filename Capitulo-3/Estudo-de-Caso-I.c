//
// Created by we on 30/07/23.
//
#include <stdio.h>

int main () {
    int contador = 0, grau, total, media, num;
    total = 0;

    while(contador <= 10 ) {
        printf("Entre com %dº grau: \n", contador);
        scanf("%d", &grau);

        total = total + grau;

        contador++;
    }

    media = total / 10;
    printf("A media da turma e %d \n", media);
    return 0;
}
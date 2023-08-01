//
// Created by we on 31/07/23.
//
#include <stdio.h>

int main() {
    float media;
    int contador, grau, total;

    //fase de inicialização
    total = 0;
    contador = 0;

    //fase de processamento
    printf("Entre com o grau, -1 para finalziar: ");
    scanf("%d", &grau);

    while(grau != -1) {
        total = total + grau;
        contador = contador + 1;
        printf("Entre com o grau, -1 para finalizar");
        scanf("%d", &grau);
    }

    //fase de terminação
    if(contador != 0) {
        media = (float) total / contador;
        printf("A media da turma e %.2f", media);
    } else {
        printf("Nenhum grau foi fornecido\n");
    }

    return 0; //indica que o programa terminou corretamente
}


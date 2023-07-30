//
// Created by we on 30/07/23.
//

#include <stdio.h>

int main() {
    int grau = 60;
    if(grau < 60) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    };

    printf("%s", grau >= 60 ? "Aprovado" : "Reporvado");

    if(grau < 60) {
        printf("Reprovado\n");
    } else if (grau ==  60) {
        printf("Aprovado\n");
    };

}


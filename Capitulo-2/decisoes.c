//
// Created by we on 29/07/23.
// Tomada de Decisões: Operadores de Igualdade e
//Relacionais
//
#include <stdio.h>

int main() {
    int n1,n2;
    printf("Entre com 2 numeros e lhe direi\n");
    printf("O relacionamento que eles satisfazem:");
    scanf("%d %d", &n1, &n2);

    if(n1 == n2) {
        printf("%d e igual a %d", n1, n2);
    }

    if(n1 != n2) {
        printf("%d e diferente de %d", n1, n2);
    }

    if(n1 < n2) {
        printf("%d e menor que %d", n1, n2);
    }

    if(n1 > n2) {
        printf("%d e maior que  %d", n1, n2);
    }

    if(n1 <= n2) {
        printf("%d e menor ou igual a %d", n1, n2);
    }

    if(n1 >= n2) {
        printf("%d e maior ou igual a %d", n1, n2);
    }
}

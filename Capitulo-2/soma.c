//
// Created by we on 29/07/23.
// Soma 2 números
//

#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Entre com o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Entre com o segundo numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("%d + %d = %d \n\n\n", num1, num2, soma);

    //Operadores aritméticos
    /**
     * + Soma
     * - Subtração
     * * Multiplicação
     * / Divisão
     * % Resto
     *
     * Exemplos:
    */

    int num = 5;
    for (int i = 0; i <= 10; i++) {

        printf("%d X %d = %d \n", i, num, (i * num));
//        printf("%d * %d = %d \n", i,num, (i * num));
//        printf("%d / %d = %d \n", i,num, (i / num));
//        printf("%d % %d = %d \n", i,num, (i % num));
//        printf("%d + %d = %d \n", i,num, (i + num));
    }
}

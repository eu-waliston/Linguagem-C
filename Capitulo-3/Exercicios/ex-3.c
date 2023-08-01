//
// Created by we on 31/07/23.
//
#include <stdio.h>
int main(){
    float litros, taxa;
    int quilometros, flag, contador;
    flag = 0;
    contador = 0;

    printf("Entre com os litros consumidos (-1 para finalizar): \n");
    scanf("%f", &litros);

    printf("Entre com os Km percorridos (-1 para finalizar): \n");
    scanf("%d", &quilometros);

    while (flag != -1){
        printf("Entre com os litros consumidos (-1 para finalizar): \n");
        scanf("%f", &litros);

        printf("Entre com os Km percorridos (-1 para finalizar): \n");
        scanf("%d", &quilometros);

        taxa = litros / (float)quilometros;
        printf("A taxa km/litro para esse tanque e %f", taxa);
    }

    if (contador != 0) {
        taxa = litros / (float ) quilometros;
        printf("A taxa km/litro para esse tanque e %f", taxa);
    } else {
        printf("A taxa km/litro esta acima do permitido");
    }
}

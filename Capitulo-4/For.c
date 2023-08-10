#include <stdio.h>

int main(){
    int soma = 0, numero;
    for(numero = 2; numero <= 100; numero += 2){
        soma += numero;
    }
    printf("A soma e %d\n", soma);
    return 0;
}

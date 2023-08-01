//
// Created by we on 31/07/23.
//

#include <stdio.h>
int main() {
    int idade;
    if(idade >= 65) {
        printf("Idade maior ou igual a 65");
    } else {
        printf("Idade menor a 65");

    }

    int x = 1, total = 0;
    while(x <= 10) {
        total += x;
        x++;
    }

    int y = 0;
    while(y <= 10) {
        printf("%d \n", y);
        y++;
    }
}

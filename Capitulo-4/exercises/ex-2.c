//
// Created by we on 10/08/23.
//

#include <stdio.h>
int main() {
    int media, operation = 0, total, final, sentinela = 0;
    do {
        printf("Digite o num: ");
        scanf("%d", &media);

        total = operation + media;

        sentinela++;
    }while(sentinela != 5);
    printf("A media final é %d", total);
}

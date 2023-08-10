//
// Created by we on 10/08/23.
//

#include <stdio.h>
int main() {
    int inteiro = 0, count = 0;
    printf("Num : ");
    scanf("%d", &count);

    for(int i = 0; i <= count; i++) {
        printf("Digite o %d numero ", i);
        scanf("%d", &inteiro);
    }
}
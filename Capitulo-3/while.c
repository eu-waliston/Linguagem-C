//
// Created by we on 30/07/23.
//

#include <stdio.h>

int main() {
    int produto = 2;
    while(produto < 1000) {
        printf("Produto: %d \n", (produto = produto * 2));
        produto++;
    }
}
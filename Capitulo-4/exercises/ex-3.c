//
// Created by we on 10/08/23.
//

#include <stdio.h>
int main() {
    int men, limit;
    printf("Digite o limite: ");
    scanf("%d", &limit);
    for (int i = 0; i < limit; ++i) {
        if(limit / limit == 0) {
            men = limit;
            printf("Os menores: \n %d", men);
            break;
        }
    }
}
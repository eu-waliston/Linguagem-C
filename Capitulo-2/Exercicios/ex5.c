#include <stdio.h>
int main() {
    int n1,n2,n3, op;
    printf("Digite o primeiro numero\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero\n");
    scanf("%d", &n2);

    printf("Digite o terceiro numero\n");
    scanf("%d", &n3);
    op = n1+n2+n3;

    if(op > 0) {
        printf("A Soma deles e %d\n", (n1+n2+n3));
        printf("A Media e %d\n", (n1+n2+n3) / 3);
        printf("O produto deles e:  %d\n", (n1*n2*n3));
    }

    if(n1 > n2 && n1 > n3  ) {
        printf("Entre %d , %d e %d, o maior e o %d", n1, n2,n3, n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("Entre %d , %d e %d, o maior e o %d", n1, n2,n3, n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("Entre %d , %d e %d, o maior e o %d", n1, n2,n3, n2);
    }
}
#include <stdio.h>
int main() {
    int n1,n2,res;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    if(n1 >= n2) {
        printf("%d e maior que %d", n1,n2);
    }

    if(n1 <= n2) {
        printf("%d e menor que %d", n1,n2);
    }

    if(n1 == n2) {
        printf("%d e igual a  %d", n1,n2);
    }
}
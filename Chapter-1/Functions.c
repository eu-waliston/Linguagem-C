#include <stdio.h>
int power(int m, int n) {
    return m * n;
};

/* test power function */
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d\n", power(3, i) );
    return 0;
}

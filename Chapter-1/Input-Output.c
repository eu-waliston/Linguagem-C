#include <stdio.h>

/*
 * //File Copying
int main() {
    int c;
    c = getchar();
    while( c != EOF) {
        putchar(c);
        c = getchar();
        //printf("%d", c);
    }
}


//Character Counting
int main() {
    long nc;

    nc = 0;
    while(getchar() != EOF) {
        ++nc;
        printf("%ld\n", nc);
    }
}



//Line Counting
int main () {
    int c, nl;
    nl = 0;
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
    printf("%d\n", nl);
}



// Line Counting
int main () {
    int c, nl;
    nl = 0;
    while((c == getchar()) != EOF) {
        if(c == '\n') {
            ++nl;
        }
        printf("%d\n", nl);
    }
}
    */

//Word Counting
#define IN 1
#define OUT 0

int main() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF) {
        nc++;
        if(c == '\n') {
            ++nl;
        }
        if(c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

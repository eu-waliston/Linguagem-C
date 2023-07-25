#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest [MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0) {
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0) {
        printf("%s", longest);
    }
    return 0;
}




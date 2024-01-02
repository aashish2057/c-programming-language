#include <stdio.h>

int main(void) {
    int c = 0;
    int space = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (!space) {
                putchar(' ');
                space = 1;
            }
        } else {
            putchar(c);
            space = 0;
        }
    }
}

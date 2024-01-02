#include <stdio.h>

#define MAX 100

int grab_line(char* line, int max) {
    int c = 0;
    int i = 0;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if (i == max && c != EOF && c != '\n') {
        while ((c = getchar()) != EOF && c != '\n') { }
    }
    return i;
}


int main(void) {
    char line[MAX] = {'\0'};
    int length = 0;

    while ((length = grab_line(line, MAX)) > 0) {
        if (length > 80) {
            printf("Line more than 80 characters\n");
            printf("Line: %s\n", line);
        } else {
            printf("Line less than 80 characters\n");
        }
    }
}

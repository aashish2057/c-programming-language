#include <stdio.h>

#define MAX 10

int grab_line(char* line, int max) {
    int c = 0;
    int i = 0;

    for(i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    return i;
}

int remove_blanks(char* line, int length) {
    int i = length - 1;
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t')) {
        i--;
    }
    line[i + 1] = '\0';
    return i + 1;
}

void copy_line(char* dest, char* source, int length) {
    for (int i = 0; i < length; i++) {
        dest[i] = source[i];
    }
}

int main(void) {
    char line[MAX] = {'\0'};
    char clear[MAX] = {'\0'};
    int og_length = 0;
    int new_length = 0;

    while ((og_length = grab_line(line, MAX)) > 0) {
        printf("Line before: %s\n", line);
        printf("Line length before: %d\n", og_length);
        new_length = remove_blanks(line, og_length);
        printf("Line after: %s\n", line);
        printf("Line length after: %d\n", new_length);
        copy_line(line, clear, og_length);
    }
}

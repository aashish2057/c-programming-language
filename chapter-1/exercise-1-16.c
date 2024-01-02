#include<stdio.h>

#define MAX 10

int grab_line(char* line, int max) {
    int i = 0;
    int c = 0;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if (i == max - 1 && c != '\n' && c != EOF) {
        while ((c = getchar()) != '\n' && c != EOF) { }
    }

    return i;
}

void copy_line(char* dest, char* source, int length) {
    for (int i = 0; i < length; i++) {
        dest[i] = source[i];
    }
}

int main (void) {
    int c = 0;
    int length = 0;
    int longest_length = 0;
    char line[MAX] = {'\0'};
    char longest_line[MAX] = {'\0'};
    char clear[MAX] = {'\0'};

    while ((length = grab_line(line, MAX)) > 0) {
        printf("Line Length: %d\n", length);
        printf("Line: %s\n", line);
        printf("\n");
        
        if (length >= longest_length) {
            longest_length = length;
            copy_line(longest_line, line, longest_length);
        }
        copy_line(line, clear, length);
    }

    printf("Longest Length: %d\n", longest_length);
    printf("Longest Line: %s\n", longest_line);
}






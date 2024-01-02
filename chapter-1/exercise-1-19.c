#include <stdio.h>

void reverse(char* str, int length) {
    int i = 0;
    length--;
    char tmp = ' ';
    while (i < length) {
        tmp = str[i];
        str[i] = str[length];
        str[length] = tmp;
        i++;
        length--;
    }
}

int grab_line(char* line, int max) {
    int c = 0;
    int i = 0;
    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    return i;
}

void copy(char* dest, char* source, int length) {
    for (int i = 0; i < length; i ++) {
        dest[i] = source[i];
    }
}

int main(void) {
    int length = 0;
    char str[20] = {'\n'};
    char clear[20] = {'\n'};
    while ((length = grab_line(str, 20)) > 0) {
        printf("Original String: %s\n", str);
        reverse(str, length);
        printf("Reversed String: %s\n", str);    
        copy(str, clear, length);
    }   
}

#include <stdio.h>

int main(void) {
    int spaces;
    int tabs;
    int newlines;
    int chars;
    int c;
    spaces = tabs = newlines = chars = c = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            spaces++;
        } else if (c == '\t') {
            tabs++;
        } else if (c == '\n') {
            newlines++;
        } else {
            chars++;
        }
    }

    printf("Space: %d\n", spaces);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);
    printf("Characters: %d\n", chars);
}

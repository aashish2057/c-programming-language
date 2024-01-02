#include <stdio.h>

int main(void) {
    printf("Only use lowercase letters here\n");

    int characters[26] = {0};
    int c = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            characters[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: ", (char)('a' + i));

        for (int j = 0; j < characters[i]; j++) {
            printf("|");
        }
        printf("\n");
    }

}

#include <stdio.h>

int main(void) {
    int c = 0;
    int count = 0;

    int word[5] = {0};
    int index = 0;
    while ((c = getchar()) != EOF) {
        if (index > 4) {
            printf("Word limit\n");
            break;
        }

        if (c == ' ' || c == '\n') {
            word[index] = count;
            count = 0;
            index++;
            continue;
        }
        count++;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < word[i]; j++) {
            printf("|");
        }
        printf("\n");
    }
}

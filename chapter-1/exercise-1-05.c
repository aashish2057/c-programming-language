#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float get_farenheit(float celsius) {
    return (9.0 / 5.0) * (celsius + 32);
}

int main() {
    printf("Celsius\tFarenheit\n");

    for (float celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
        printf("%-7.0f\t%9.1f\n", celsius, get_farenheit(celsius));
    }
}

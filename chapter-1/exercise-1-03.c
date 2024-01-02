#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float get_celsius(float farenheit) {
    return (5.0 / 9.0) * (farenheit - 32);
}

int main() {
    printf("Farenheit\tCelsius\n");

    for (float farenheit = LOWER; farenheit <= UPPER; farenheit += STEP) {
        printf("%-9.0f\t%7.1f\n", farenheit, get_celsius(farenheit));
    }
}

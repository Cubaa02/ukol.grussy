#include <math.h>
#define ENTER '\n'
#include <stdio.h>

float enterRadius() {
    float r;
    int countOfChar;
    do {
        printf("Enter a radius:");
        scanf("%f", &r);
        countOfChar = 0;
        while (getchar() != ENTER) {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a real number. Try again.\n");
        } else if (r <= 0) {
            printf("The number has to be positive. Try again.\n");
        }
    } while (countOfChar != 0 || r <= 0);
    return r;
}
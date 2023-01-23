#include <stdio.h>
#include <math.h>
#define ENTER '\n'
#include "vystup.h"

float enterRadius();

int enterOption(int min, int max) {
    int option;
    int countOfChar;
    do {
        printf("Enter an option:");
        scanf("%d", &option);
        countOfChar = 0;
        while (getchar() != ENTER) {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a whole number. Try again.\n");
        } else if (option < min || option > max) {
            printf("Choose an option from %d to %d. Try again.\n", min, max);
        }
    } while (countOfChar != 0 || option < min || option > max);
    return option;
}

int main() {
    int input;
    float r;
    do {
        printf("MENU\n");
        printf("1 - circumference of a circle\n");
        printf("2 - area of a circle\n");
        printf("3 - volume of a sphere\n");
        printf("4 - surface of a sphere\n");
        printf("5 - terminate program\n");
        input = enterOption(1, 5);
        switch (input) {
            case 1:
                r = enterRadius();
                printf("Circumference of a circle of the radius %.2f is %.2f.\n", r, 2 * 3.14 * r);
                break;
            case 2:
                r = enterRadius();
                printf("Area of a circle of the radius %.2f is %.2f.\n", r, 3.14 * pow(r, 2));
                break;
            case 3:
                r = enterRadius();
                printf("Volume of a sphere of the radius %.2f is %.2f.\n", r, 4.0 / 3.0 * pow(r, 3));
                break;
            case 4:
                r = enterRadius();
                printf("Surface of a sphere of the radius %.2f is %.2f.\n", r, 4 * 3.14 * pow(r, 2));
                break;
        }
    } while(input != 5);



    return 0;
}

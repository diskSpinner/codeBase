#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void addition(float x, float y) {
    float sum = x + y;
    printf("Addition: %.2f\n", sum);
}

void subtraction(float x, float y) {
    float sum = x - y;
    printf("Subtraction: %.2f\n", sum);
}

void multiplication(float x, float y) {
    float sum = x * y;
    printf("Multiplication: %.2f\n", sum);
}

void division(float x, float y) {
    float sum = x / y;
    if (y == 0) {
        printf("Invalid Input!\n");
    }
    else {
        printf("Division: %.2f\n", sum);
    }
}

void area_of_square(float x) {
    float sum = x*x;
    printf("%.2f\n", sum);
}

void scan_area_input_square(float *x) {
    printf("X: ");
    scanf("%f", x);
}

void scan_input(float *x, float *y) {
    printf("X: ");
    scanf("%f", x);
    printf("Y: ");
    scanf("%f", y);
}

int main() {
    while (true) {
        float x;
        float y;
        int choice;
    
        printf("What do you want to do (1. Addition, 2. Subtraction, 3. Multiplication, 4. Division, 5. Area of Square): ");
        scanf("%d", &choice);

        if (choice == 1) {
            scan_input(&x, &y);
            addition(x, y);
        }
        else if (choice == 2) {
            scan_input(&x, &y);
            subtraction(x, y);
        }
        else if (choice == 3) {
            scan_input(&x, &y);
            multiplication(x, y);
        }
        else if (choice == 4) {
            scan_input(&x, &y);
            division(x, y);
        }
        else if (choice == 5) {
            scan_area_input_square(&x);
            area_of_square(x);
        }
        else {
            printf("Invalid choice!\n");
        }
    }
}
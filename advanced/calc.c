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

void area_calculation_prc(float x, float y) {
    int choice;
    float x;
    float y;
    printf("What do you want to do (1. Square, 2. Rectangle)");
    switch (choice) {
        case 1:
            scan_area_input_square(&x);
            break;
        case 2:
            break;
        default:
            break;
    }
}

int main() {
    while (true) {
        float x;
        float y;
        int choice;
    
        printf("What do you want to do (1. Addition, 2. Subtraction, 3. Multiplication, 4. Division, 5. Area Calculation, 6. Advanced Functions ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            scan_input(&x, &y);
            addition(x, y);
            break;
        case 2:
            scan_input(&x, &y);
            subtraction(x, y);
            break;
        case 3:
            scan_input(&x, &y);
            multiplication(x, y);
            break;
        case 4:
            scan_input(&x, &y);
            division(x, y);
            break;
        case 5:
            // ...
            break;
        case 6:
            area_calculation_prc(x,y);
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
        
    }
}


// switch cases in c (online) (done)
// implement it into our calculator, make another "what type of area calculation" do you want in the 5. area calculations tab (in progress)
// implement other area calculator functions like triangle, parallelogram, etc ( still in progress )
// start first with square root calculation in the "advanced calculation" option (number 6. after area calculation)
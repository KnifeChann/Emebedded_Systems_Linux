#include <stdio.h>
//function prototypes
void add (int a, int b);
void subtract (int a, int b);
void multiply (int a, int b);
void divide (int a, int b);
void modulo (int a, int b);
int addo(int a, int b);

//function definitions

int addo(int a, int b) {
    return a + b;
}

void add(int a, int b) {
    printf("Sum: %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Difference: %d\n", a - b);
}

void multiply(int a, int b) {
    printf("Product: %d\n", a * b);
}

void divide(int a, int b) {
    if (b != 0) {
        printf("Quotient: %d\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulo(int a, int b) {
    if (b != 0) {
        printf("Modulo: %d\n", a % b);
    } else {
        printf("Error: Modulo by zero is not allowed.\n");
    }
}



int main() {
    //function calls
    add(5, 3);
    subtract(5, 3);
    multiply(5, 3);
    divide(5, 3);
    modulo(5, 3);
    printf("Sum using addo: %d\n", addo(5, 3));
    return 0;
}
#include <stdio.h>
#include <math.h>


void gm();
void ga();
void gn();
void gm() {
    printf("Good Morning\n");
}
void ga() {
    printf("Good Afternoon\n");
}
void gn() {
    printf("Good Night\n");
}

int add(int a, int b) {
    a = a + b;
    return a ;
}
void add_by_pointer(int *a, int b) {
    *a = *a + b;
}

int main() {
    gm();
    ga();
    gn();
    printf("\n");

    //call by value
    int a = 5, b = 10;  

    int c = add(a, b);
    printf("Sum: %d\n", c);
    printf("Sum: %d\n", a);

    //call by reference
    add_by_pointer(&a, b);
    printf("Sum: %d\n", a);  // 15

    // Square using pow()
    double num = 4.0;
    double square = pow(num, 2.0);
    printf("Square of %.2f is %.2f\n", num, square);
    return 0;
}
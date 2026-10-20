// 1. Write a C program to calculate the area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.
// 2. Calculate the area of a circle and modify the same program to calculate the volume of
// a cylinder given its radius and height.
// ry
// 3. Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.
// 4. Write a program to calculate simple interest for a set of values representing principal,
// number of years, and rate of interest.

#include <stdio.h>

int main(){
    int l, b;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);
    printf("The area of the rectangle is: %d\n", l * b);


    printf("\n");   
    int x = 5,y =5;
    printf("The area of the rectangle is: %d\n", x * y);
    printf("\n");
    
    

    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    printf("The area of the circle is: %.2f\n", 3.14 * r * r);
    int h;
    printf("Enter the height of the cylinder: ");
    scanf("%d", &h);
    printf("The volume of the cylinder is: %.2f\n", 3.14 * r * r * h);
    printf("\n");   


    float c;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);
    printf("The temperature in Fahrenheit is: %.2f\n", (c * 9/5) + 32);
    printf("\n");

    int p, n;
    float r1;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the number of years: ");
    scanf("%d", &n);
    printf("Enter the rate of interest: ");
    scanf("%f", &r1);
    printf("The simple interest is: %.2f\n", (p * n * r1) / 100);
    
    return 0;
}
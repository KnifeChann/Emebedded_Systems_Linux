/* 1. Write a program using function to find average of three numbers.
2. Write a function to convert Celsius temperature into Fahrenheit.
3. Write a function to calculate force of attraction on a body of mass 'm' exerted by
earth. Consider g = 9.8m/s² .
4. Write a program using recursion to calculate nth element of Fibonacci series.
5. What will the following line produce in a C program?
int a = 4;
printf("%d %d %d \n", a, ++a, a++);
6. Write a recursive function to calculate the sum of first 'n' natural numbers.
7. Write a program using function to print the following pattern (first n lines):
*
***
*****
 */
#include <stdio.h>

int average(int x, int y, int z);
int celsiusToFahrenheit(float celsius);
int forceOfAttraction(float mass);
int fibonacci(int n);
int sumOfNaturalNumbers(int n);
int printPattern(int n);


int average(int x, int y, int z) {
    return (x + y + z) / 3;
}

int celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int forceOfAttraction(float mass) {
    const float g = 9.8; // acceleration due to gravity in m/s²
    return mass * g;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int sumOfNaturalNumbers(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}
int printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}   

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int avg = average(num1, num2, num3);
    printf("Average of %d, %d, and %d is: %d\n", num1, num2, num3, avg);
    printf("\n");
    
    int celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);
    int fahrenheit = celsiusToFahrenheit(celsius);
    printf("%d Celsius is equal to %d Fahrenheit\n", celsius, fahrenheit);
    printf("\n");

    float mass;
    printf("Enter mass of the body in kg: ");
    scanf("%f", &mass);
    float force = forceOfAttraction(mass);
    printf("Force of attraction on a body of mass %f kg is: %f N\n", mass, force);
    printf("\n");

    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    printf("The %dth term of Fibonacci series is: %d\n", n, fibonacci(n));
    printf("\n");

    int q = 4;
    printf("%d %d %d \n", q, ++q, q++);
    printf("\n");

    int k = 5;
    printf("Sum of first %d natural numbers is: %d\n", k, sumOfNaturalNumbers(k));
    printf("\n");

    int lines;
    printf("Enter the number of lines for the pattern: ");
    scanf("%d", &lines);
    printPattern(lines);    

    return 0;
}
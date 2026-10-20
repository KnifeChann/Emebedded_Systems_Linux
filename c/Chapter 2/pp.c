// 1. Which of the following is invalid in C?
// a. int a = 1; int b = a;
// b. int v = 3*3;
// c. char dt = '21 dec 2020';
// 2. What data type will 3.0/8 − 2 return?
// 3. Write a program to check whether a number is divisible by 97 or not.
// 4. Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1 .
// 5. 3.0 + 1 will be:
// a. Integer.
// b. Floating point number.
// c. Character.

#include <stdio.h>

int main() {
    //c
    // 3.0/8 - 2 will return a floating point number (double) because the division of a double (3.0) by an integer (8) results in a double, and subtracting an integer (2) from a double also results in a double.
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 97 == 0) {
        printf("%d is divisible by 97.\n", number);
    } else {
        printf("%d is not divisible by 97.\n", number);
    }
    printf("\n");
    // 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1
    // Step by step evaluation:
    // 1. Substitute the values: 3*2/3-3+1
    // 2. Perform multiplication: 6/3-3+1       
    // 3. Perform division: 2-3+1
    // 4. Perform subtraction: -1+1
    // 5. Perform addition: 0
    printf("\n");
    printf("The result of 3*x/y-z+k is: 0\n");
    printf("\n");

    float  x = 3.0 ;
    int y = 1;
    float result = x + y; // 3.0 + 1 will be a floating point number (float) because the addition of a float (3.0) and an integer (1) results in a float.
    printf("The result of 3.0 + 1 is: %.1f\n", result);

    return 0;
}
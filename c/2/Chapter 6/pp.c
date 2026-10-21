/* 1. Write a program to print the address of a variable. Use this address to get the value of
the variable.
2. Write a program having a variable i . Print the address of i . Pass this variable to a
function and print its address. Are these addresses the same? Why?
3. Write a program to change the value of a variable to ten times its current value.
4. Write a function and pass the value by reference.
5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main() .
6. Write a program to print the value of a variable i by using a pointer to pointer
type variable.
7. Try problem 3 using call by value and verify that it does not change the value of the
variable. */

#include <stdio.h>

int printAddress(int *p) {
    printf("The address of i inside the function is : %p \n",p);
    printf("The value of i inside the function is : %d \n",*p);
    return 0;
}

int tenTimes(int *p) {
    *p = (*p) * 10;
    return 0;
}

int callByValue(int a) {
    a = a * 10;
    return 0;
}

int callbyreference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int sumAndAverage(int *num1, int *num2, int *sum, float *average) {
    *sum = *num1 + *num2;
    *average = (float)(*sum) / 2;
    return 0;
}

int main() {
    int a= 10;
    printf("The address of a is : %p \n",&a);
    printf("The value of a is : %d \n",a);
    printf("The value of a using its address is : %d \n",*(&a));
    printf("\n");

    int i= 20;
    printf("The address of i is : %p \n",&i);
    printAddress(&i);
    printf("\n");

    int var= 5;
    printf("The value of var before changing is : %d \n",var);
    tenTimes(&var);
    printf("The value of var after changing is : %d \n",var);
    printf("\n");

    int a1= 15, a2= 25;
    callbyreference(&a1, &a2);
    printf("the value of a and b after call by reference is : %d and %d \n",a1,a2);
    printf("\n");

    int num1= 10, num2= 20;
    int sum;
    float average;
    sumAndAverage(&num1, &num2, &sum, &average);
    printf("The sum of %d and %d is : %d \n",num1, num2, sum);
    printf("The average of %d and %d is : %f \n",num1, num2, average);
    printf("\n");

    int j= 30;  
    int *ptr = &j;
    int **ptr2 = &ptr;
    printf("The value of j using pointer to pointer is : %d \n", **ptr2);
    printf("\n");

    int val= 7;
    printf("The value of val before call by value is : %d \n",val);
    callByValue(val);
    printf("The value of val after call by value is : %d \n",val);
    printf("\n");

    return 0;
}
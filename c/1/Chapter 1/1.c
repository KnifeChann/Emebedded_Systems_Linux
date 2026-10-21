#include <stdio.h>

int main()
{
    printf("\n");
    int a = 6;
    printf("The value of a is: %d\n", a);
    printf("Hello World\n");
    printf("size of int is: %zu\n", sizeof(int));
    printf("size of char is: %zu\n", sizeof(char));
    printf("size of float is: %zu\n", sizeof(float));
    printf("size of double is: %zu\n", sizeof(double));

    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
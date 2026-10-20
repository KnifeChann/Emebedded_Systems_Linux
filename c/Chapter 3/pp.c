#include <stdio.h>

int main(void) {
    int a = 10;

    if (a == 11) {
        printf("I am 11\n");
    } else {
        printf("I am not 11\n");
    }

    int m1, m2, m3;
    printf("Enter marks for three subjects (out of 100): ");
    scanf("%d %d %d", &m1, &m2, &m3);

    int total = m1 + m2 + m3;
    if (m1 >= 33 && m2 >= 33 && m3 >= 33 && total >= 120) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }

    float income, tax = 0;
    printf("Enter your annual taxable income in rupees: ");
    scanf("%f", &income);

    if (income > 1000000) {
        tax = (income - 1000000) * 0.30f
            + 500000 * 0.20f
            + 250000 * 0.05f;
    } else if (income > 500000) {
        tax = (income - 500000) * 0.20f
            + 250000 * 0.05f;
    } else if (income > 250000) {
        tax = (income - 250000) * 0.05f;
    }

    printf("Income tax to be paid: %.2f\n", tax);

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("%c is lowercase.\n", ch);
    } else {
        printf("%c is not lowercase.\n", ch);
    }

    int num1, num2, num3, num4;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int greatest = num1;
    if (num2 > greatest) greatest = num2;
    if (num3 > greatest) greatest = num3;
    if (num4 > greatest) greatest = num4;

    printf("The greatest number is: %d\n", greatest);
    return 0;
}
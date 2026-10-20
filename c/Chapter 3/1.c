#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\n");
    if (age >= 18)
    {
        printf("You are an adult.\n");
    }
    else if (age >= 13)
    {
        printf("You are a minor.\n");
    }
    else
    {
        printf("You are a child.\n");
    }

    printf("\n");

    switch (age)
    {
    case 0 ... 12:
        printf("You are a child.\n");
        break;
    case 13 ... 17:
        printf("You are a minor.\n");
        break;
    case 18 ... 64:
        printf("You are an adult.\n");
        break;
    default:
        printf("You are a senior citizen.\n");
        break;
    }

    printf("\n");

    // ternary operator example:
    (age >= 18) ? printf("You are an adult.\n") : printf("You are not an adult.\n");

    printf("\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n");
    switch (num)
    {
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("Saturday.\n");
        break;
    case 7:
        printf("Sunday.\n");
        break;
    default:
        printf("Invalid input.\n");
    }

    printf("\n");

    if (num == 1)
    {
        printf("Monday.\n");
    }
    else if (num == 2)
    {
        printf("Tuesday.\n");
    }
    else if (num == 3)
    {
        printf("Wednesday.\n");
    }
    else if (num == 4)
    {
        printf("Thursday.\n");
    }
    else if (num == 5)
    {
        printf("Friday.\n");
    }
    else if (num == 6)
    {
        printf("Saturday.\n");
    }
    else if (num == 7)
    {
        printf("Sunday.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }

    printf("\n");

    (num == 1) ? printf("Monday.\n") : (num == 2) ? printf("Tuesday.\n")
                                   : (num == 3)   ? printf("Wednesday.\n")
                                   : (num == 4)   ? printf("Thursday.\n")
                                   : (num == 5)   ? printf("Friday.\n")
                                   : (num == 6)   ? printf("Saturday.\n")
                                   : (num == 7)   ? printf("Sunday.\n")
                                                  : printf("Invalid input.\n");

    printf("\n");
    // if inside if
    if (age >= 18)
    {
        if (age >= 65)
        {
            printf("You are a senior citizen.\n");
        }
        else
        {
            printf("You are an adult.\n");
        }
    }
    else
    {
        if (age >= 13)
        {
            printf("You are a minor.\n");
        }
        else
        {
            printf("You are a child.\n");
        }
    }
    printf("\n");

    return 0;
}
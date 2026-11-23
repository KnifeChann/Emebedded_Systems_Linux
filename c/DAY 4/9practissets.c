#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
} vecna;

typedef struct complex
{
    int real;
    int imaginary;
} cmplx;

void display(cmplx c)
{
    printf("The value of the commplex number is %d + %di \n", c.real, c.imaginary);
}

typedef struct bankaccount
{
    char name[100];
    char accountNumber[20];
    long long balanceInPaise;
} BankAccount;

typedef struct date
{
    int day;
    int month;
    int year;
}da;

int compareDates(struct date a, struct date b)
{
    if (a.year != b.year)
        return a.year < b.year ? -1 : 1;

    if (a.month != b.month)
        return a.month < b.month ? -1 : 1;

    if (a.day != b.day)
        return a.day < b.day ? -1 : 1;

    return 0;
}
// void sumvector(vecna v1,vecna v2){
//     v1.i = v1.i + v2.i;
//     v2.j = v1.j + v2.j;
//     printf("the sum of v1 and v2 is %di and %dj \n",v1.i,v2.j);
// }

vecna sumvector(vecna v1, vecna v2)
{
    vecna v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main()
{
    // 1. Create a two-dimensional vector using structures in C.
    // 2. Write a function sumVector which returns the sum of two vectors passed to it. The
    // vectors must be two-dimensional.
    // 3. Twenty integers are to be stored in memory. What will you prefer - Array or structure?
    // 4. Write a program to illustrate the use of arrow operator -> in C.
    // 5. Write a program with a structure representing a complex number.
    // 6. Create an array of 5 complex numbers created in Problem 5 and display them with the
    // help of a display function. The values must be taken as an input from the user.
    // 7. Write problem 5's structure using typedef keywords.
    // 8. Create a structure representing a bank account of a customer. What fields did you use
    // and why?
    // 9. Write a structure capable of storing date. Write a function to compare those dates.
    // 10. Solve problem 9 for time using typedef keyword.

    //1
    vecna v1 = {1,2};
    printf("The value of vector is %di and %dj \n",v1.i,v1.j);

    // //2
    vecna v1 = {1,2},v2={2,3};
    // sumvector(v1,v2);
    vecna v4 = sumvector(v1,v2);
    printf("%d %d \n",v4.i,v4.j);

    //3
    // array

    //4
    vecna v1={1,2};
    vecna *ptr;
    ptr = &v1;
    printf("%di and %dj \n",ptr->i,ptr->j);

    //5
    cmplx c1={1,2};
    printf("The value of c1 is %d + %di \n",c1.real,c1.imaginary);

    //6
    cmplx arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of %dst complex number: ",i+1);
        scanf("%d",&arr[i].real);
        printf("Enter the imaginary part of %dst complex number: ",i+1);
        scanf("%d",&arr[i].imaginary);
        display(arr[i]);
    }

    7
    already done

    // 8
    BankAccount customer = {"Asha Sharma", "001234567890", 250000};

    printf("Account holder: %s\n", customer.name);
    printf("Account number: %s\n", customer.accountNumber);
    printf("Balance: %lld paise\n", customer.balanceInPaise);

    // 9
    struct date d1 = {1, 12, 2026};
    struct date d2 = {1, 1, 2026};

    printf("%d\n", compareDates(d1, d2)); // Prints -1
    
    //10
    da d1 = {1, 12, 2026};
    da d2 = {1, 1, 2026};

    printf("%d\n", compareDates(d1, d2)); // Prints -1
    

    return 0;
}
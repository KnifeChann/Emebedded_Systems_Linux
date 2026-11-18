#include <stdio.h>
#include <math.h>

// functions prototype
void sum(int x, int y);
int sumo(int, int);
int sumOfNumbers(int);
void gm();
void gs();
void gn();
int cbv(int);
void swap(int *a, int *b);
float avg(int, int, int);
float ctf(int);
void force(int);
int fibonacci(int);
void stairs(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

// function definitions
void sum(int a, int b)
{
    int sum = a + b;
    printf("The sum is %d\n", sum);
}
int sumo(int a, int b)
{
    return a + b;
}
int sumOfNumbers(int n)
{
    // Base case: stops recursion when n is 0
    if (n <= 0)
    {
        return 0;
    }
    // Recursive case: adds current n to the sum of (n - 1)
    return n + sumOfNumbers(n - 1);
}
void gm()
{
    printf("Good Morining\n");
}
void gs()
{
    printf("Good Afternoon\n");
}
void gn()
{
    printf("Good Night\n");
}
int cbv(int x)
{
    int y = 99;
    x = y;
    return 0;
}
int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}
float ctf(int c)
{
    float fahrenheit = (float)(c * 9.0 / 5.0) + 32;
    return fahrenheit;
}
void force(int x)
{
    float force = x * 9.8f;
    printf("The force on boddy with mass %d is %0.2f", x, force);
}
int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    //functions and recursions
    int a = 5,b  = 7;

    //functions(void)
    sum(a,b);

    //functions(return)
    printf("The sum of a and b is %d\n",sumo(a,b));

    // recursion
    int n = 6;
    printf("the sum of digits from 1 to %d is :  %d\n",n,sumOfNumbers(n)   //function call
    );

    gm();
    gs();
    gn();

    //call by vlaue
    int x = 5;
    cbv(x);
    printf(" cbv of %d",x);

    //call by reference
    int l = 10;
    int m = 20;

    printf("before swap the a is %d and b is %d\n",l,m);

    swap(&l,&m);

    printf("after swap the a is %d and b is %d\n",l,m);

    printf("The value of a raise to 3 is %d\n",(int)pow(2,3));

    int p;
    printf("Enter the value of the number you want to calclate the fatorial for: ");
    scanf("%d",&p);
    printf("The factorial of %d is %d\n",p,factorial(p));

    // praactise problems
    //  1. Write a program using function to find average of three numbers.
    //  2. Write a function to convert Celsius temperature into Fahrenheit.
    //  3. Write a function to calculate force of attraction on a body of mass 'm' exerted by
    //  earth. Consider g = 9.8m/s² .
    //  4. Write a program using recursion to calculate nth element of Fibonacci series.
    //  5. What will the following line produce in a C program?
    //  int a = 4;
    //  printf("%d %d %d \n", a, ++a, a++);
    //  6. Write a recursive function to calculate the sum of first 'n' natural numbers.
    //  7. Write a program using function to print the following pattern (first n lines):
    //  *
    //  ***
    //  *****

    //1
    int a,b,c;
    printf("Enter the values of a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    printf("The average of %d, %d and %d is %f",a,b,c,avg(a,b,c));

    //2
    int c = 27;
    printf("The converison of c(%d) to f is : %f\n",c,ctf(c));

    //3
    int m;
    printf("ENter the value of the mass: ");
    scanf("%d",&m);
    force(m);

    //4
    int n;
    printf("ENter the value of the nth element: ");
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));

    // 5
    int a = 4;
    printf("%d  \n", a);
    printf("%d  \n", ++a);
    printf("%d  \n", a++);

    //6
    auto n =5;
    printf("%d\n",sumOfNumbers(n));

    //7
    // *
    // **  
    // ***
    int n;
    printf("Enter n: \n");
    scanf("%d",&n);
    stairs(n);

    return 0;
};
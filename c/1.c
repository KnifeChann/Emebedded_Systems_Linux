// variables and constants and keywords

#include <stdio.h>

int main()
{
    printf("hello world\n");

    // variables
    int water;
    water = 2;
    printf("%d\n", water);

    // datatypes
    int james = 100;
    float pong = 99.99;
    double pepse = 99.99;
    printf("%d\n", james);
    printf("%f\n", pong);
    printf("%f\n", pepse);

    // keywords
    auto apple = 555;
    printf("%d\n", apple);

    // comments = used to add comments or show description in the programme

    // inputs
    int x;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("The value you entered for x is : %d\n", x);

    // escape sequence characters
    char ch = 'a';
    ch = 'c';
    ch = '\n';
    printf("my name is %c aryan\n", ch);

    // practise set
    // 1. Write a C program to calculate the area of a rectangle:
    // a. Using hard coded inputs.
    // b. Using inputs supplied by the user.
    // 2. Calculate the area of a circle and modify the same program to calculate the volume of
    // a cylinder given its radius and height.
    // 3. Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.
    // 4. Write a program to calculate simple interest for a set of values representing principal,
    // number of years, and rate of interest.

    //1(a)
    int len = 5;
    int bre = 5;
    printf("The area of the rectangle is : %d\n",len*bre);
    //1(b)
    printf("Enter the length and bredth of the rectangle :");
    scanf("%d %d",&len,&bre);
    printf("The area of the rectangle is : %d\n",len*bre);
    
    //2(a)
    float rad;
    printf("Enter the radius of the circle :");
    scanf("%f",&rad);
    printf("The area of the circle is : %f\n",3.14*rad*rad);
    //2(b)
    float h;
    printf("Enter the height of the circle :");
    scanf("%f",&h);
    printf("The volume of the cylinder is : %f\n",3.14*rad*rad*h);

    //3
    float cel;
    float faren;
    printf("Enter the value of the Celcius: ");
    scanf("%f",&cel);
    printf("The value you gave in celcius is %f and it's farenhite is %2.f",cel ,(9/5)*cel + 32 );

    //4
    float roi;
    float year;
    float p; 
    printf("Enter  the values of year ROI and p: ");   
    scanf("%f %f %f",&year , &roi, &p);
    printf("The Simple Interest is %f\n",(roi*p*year)/100);




    return 0;
}
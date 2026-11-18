#include <stdio.h>

int main()
{

    // conditional instructions
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // if else stateemtnt
    if (age >= 18)
    {
        printf("You are an adult FAAAAAAA\n");
    }
    else
    {
        printf("Go play games lol\n");
    }
    printf("\n");

    // if else if else statement
    if (age >= 18)
    {
        printf("You are an adult FAAAAAAA\n");
    }
    else if (age > 0 && age < 18)
    {
        printf("You are a teen been chillin\n");
    }
    else
    {
        printf("Enter somethin i can understand bruh!!!\n");
    }

    int day;
    printf("Enter the day (1-7): ");
    scanf("%d", &day);
    printf("\n");

    // switch case
    switch (day)
    {
    case 1:
        printf("MONDAY\n");
        break;
    case 2:
        printf("TUESDAY\n");
        break;
    case 3:
        printf("WEDNESDAY\n");
        break;
    case 4:
        printf("THURSDAY\n");
        break;
    case 5:
        printf("FRIDAY\n");
        break;
    case 6:
        printf("SATURDAY\n");
        break;
    case 7:
        printf("SUNDAY\n");
        break;
    default:
        printf("bruh write between 0 and 8\n");
        break;
    }

    // logical operatoes(|| , && and !)
    printf("\n");

    printf("\n");
    // ternary opertaor
    int tern = 10 > 5 ? 10 : 5;
    printf("%d\n", tern);

    printf("\n");
    // practise sets
    // 1. What will be the output of this program ? int a = 10;
    // if (a = 11)
    //     printf("I am 11");
    // else
    //     printf("I am not 11");
    // 2. Write a program to determine whether a student has passed or failed.To pass, a
    //                                                                                             student requires a total of 40 %
    //                                                                                         and at least 33 % in each subject.Assume there are three subjects and take the marks as input from the user.3. Calculate income tax paid by an employee to the government as per the slabs mentioned below : Income Slab Tax 2.5 -
    //                                                                                     5.0L 5 %
    //                                                                                         5.0L -
    //                                                                                     10.0L 20 %
    //                                                                                         Above 10.0L 30 %
    //                                                                                         Note that there is no tax below 2.5L. Take income amount as an input from the user.4. Write a program to find whether a year entered by the user is a leap year or not.Take
    //                                                                                             year as an input from the user.5. Write a program to determine whether a character entered by the user is lowercase or
    //                                                                                                 not.6. Write a program to find greatest of four numbers entered by the user.

    // 1
    // i am 11

    // 2
    int x, y, z;
    printf("Enter the marks of x , y and z: ");
    scanf("%d %d %d", &x, &y, &z);
    if ((x >= 33 && y >= 33 && z >= 33) && (x + y + z) / 3 >= 40)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }

    // 3
    double income;
    printf("Enter your income: ");
    scanf("%lf", &income);
    if (income > 10)
    {
        printf("30%%\n");
    }
    else if (income > 5)
    {
        printf("20%%\n");
    }
    else if (income >= 2.5)
    {
        printf("5%%\n");
    }
    else
    {
        printf("no tax\n");
    }

    //4
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0 ) || year%400==0){
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not  a leap year\n",year);
    }

    //5
    char ch;
    printf("Enter your character: ");
    scanf(" %c",&ch);
    if(ch>='a' && ch<='z'){
        printf("%c is a lowercase",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("%c is a uppercase",ch);
    }
    else{
        printf("NOT  LOWER OR UPPER CASE");
    }

    // 6
    int l, m, n, o;
    printf("Enter the four numbers: ");
    scanf("%d%d%d%d", &l, &m, &n, &o);
    if (l == m && m == n && n == o)
    {
        printf("All are equal: %d", l);
    }
    else if (l > m && l > n && l > o)
    {
        printf("%d is the greatest", l);
    }
    else if (m > l && m > n && m > o)
    {
        printf("%d is the greatest", m);
    }
    else if (n > l && n > m && n > o)
    {
        printf("%d is the greatest", n);
    }
    else if (o > l && o > m && o > n)
    {
        printf("%d is the greatest", o);
    }
    else
    {
        printf("There is a tie for greatest");
    }

    return 0;
}
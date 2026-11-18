#include <stdio.h>
#include <math.h>

int main()
{
    // exponential operators
    printf("the value of 2 raise to 3 is: %2.f\n", pow(2, 3));

    // practse set
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

    //1
    //c

    //2
    //double

    //3
    int num; 
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num % 97 == 0){
        printf("yes %d is divisible by 97\n",num);
    }
    else{
        printf("noo %d is not divisible by 97\n",num);
    }
    
    //4
    printf("%d\n",3*2/3-3+1);

    //5
    float x = 3.0f;
    int y = 1;
    printf("%f",x+y);

    return 0;
}
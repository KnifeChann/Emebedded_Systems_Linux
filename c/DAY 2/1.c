#include <stdio.h>

int main()
{

    //loops in c

    //forloops
    for(int i=0;i<10;i++){
        printf("HAPPY BIRTHDAY!!\n");
    }
    printf("\n");

    int x =0;
    while(x<10){
        printf("%d\n",x+10);
        x++;
    }

    printf("\n");

    //while
    int i=1;
    while(i<11){
        printf("HAPPY BIRTHDAY!!  %d\n",i);
        i++;
    }

    printf("\n");
    do{
        printf("HELLA NAH\n");
    }while(10<9);

    int n=1;
    do{
        printf("%d\n",n);
        n++;
    }while(n<11);

    printf("\n");
    int y=0;
    while(y<10){
        y++;
        printf("%d\n",y);
        if(y==5){
            continue;
        }
        if(y==7){
            break;
        }
    }

    printf("\n");
    //decreameanting forloop
    for(int n=10;n>0;n--){
        printf("%d\n",n);
    }

    practise sets
    1. Write a program to print multiplication table of a given number n .
    2. Write a program to print multiplication table of 10 in reversed order.
    3. A do while loop is executed:
    a. At least once.
    b. At least twice.
    c. At most once.
    4. What can be done using one type of loop can also be done using the other two types
    of loops – true or false?
    5. Write a program to sum first ten natural numbers using while loop.
    6. Write a program to implement program 5 using for and do-while loop.
    7. Write a program to calculate the sum of the numbers occurring in the multiplication
    table of 8 (consider 8 × 1 to 8 × 10).
    8. Write a program to calculate the factorial of a given number using a for loop.
    9. Repeat 8 using while loop.
    10. Write a program to check whether a given number is prime or not using loops.
    11. Implement 10 using other types of loops.

    //1
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }

    //2
    int i=10;
    while(i>0){
        printf("%d X %d = %d\n",10,i,i*10);
        i--;
    }

    // 3
    // at least once

    //4
    true

    //5
    int num = 1;
    int sum = 0;
    while(num<=10){
        sum+=num;
        num++;
    }
    printf("the sum is : %d\n",sum);

    //6(a)
    int sum =0;
    for(int i=1;i<=10;i++){
        sum+=i;

    }
    printf("the sum is : %d\n",sum);
    //6(b)
    int sum = 0;
    int i=1;
    do{
        sum+=i;
        i++;
    }while(i<=10);
    printf("the sum is : %d\n",sum);

    //7
    int sum = 0;
    int i=1;
    while(i<=10){
        sum+=(i*8);
        i++;
    }
    printf("the sum is : %d\n",sum);

    //8
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d\n",fact);
    
    
    // 9
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int fact=1;
    int i=1;
    while(i<=n){
            fact*=i;
            i++;
        }
        printf("%d\n",fact);
        

    //10
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int count=0;
    if(n==0 || n==1){
        printf("Not a prime number\n");
    }else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
    }    
    if(count ==1){
        printf("prime\n");
    }else{
        
        printf(" not prime\n");
    }

    //11(a)
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int count=0;
    if(n==0 || n==1){
        printf("Not a prime number\n");
    }else{
        int i=2;
        while(i<=n){
            if(n%i==0){
                count++;
            }
            i++;
        }
    }        
    if(count ==1){
        printf("prime\n");
    }else{
        
        printf(" not prime\n");
    }
    //11(b)    
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int count=0;
    if(n==0 || n==1){
        printf("Not a prime number\n");
    }else{
        int i=2;
        do{
            if(n%i==0){
                count++;
            }
            i++;
        }while(i<=n);
    }        
    if(count ==1){
        printf("prime\n");
    }else{
        
        printf(" not prime\n");
    }
    
    return 0;
}
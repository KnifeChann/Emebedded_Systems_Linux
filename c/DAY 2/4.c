#include <stdio.h>


void padd(int *);
void tenx(int *);
int sum(int *, int *);
int avg(int *, int *);

void padd(int *x){
    printf("The address of i is %p\n",x);
}
void tenx(int *x){
    *x*=10;
}
void pvbr(int *x){
    *x = 99;
}

int sum(int *a, int*b){
    return *a +*b;
}
int avg(int *a, int*b){
    return (*a +*b)/2;
}

int main()
{
    // pointers in C
    //  int i = 10;
    //  printf("The address of i is %p\n",&i);

    // pointer poiting to i
    //  int *j = &i;
    //  printf("%d\n",*j);

    // addresss of an adddress operator
    // int i = 6;
    // int *j = &i;
    // int **k = &j;

    // printf("The value of i is %d \n", **k);

    // 1. Write a program to print the address of a variable. Use this address to get the value of
    // the variable.
    // 2. Write a program having a variable i . Print the address of i . Pass this variable to a
    // function and print its address. Are these addresses the same? Why?
    // 3. Write a program to change the value of a variable to ten times its current value.
    // 4. Write a function and pass the value by reference.
    // 5. Write a program using a function which calculates the sum and average of two
    // numbers. Use pointers and print the values of sum and average in main() .
    // 6. Write a program to print the value of a variable i by using a pointer to pointer
    // type variable.
    // 7. Try problem 3 using call by value and verify that it does not change the value of the variab


    // //1
    // int x= 99 ;
    // int *y = &x;
    // printf("The adress of x is %p\n",y);
    // printf("The value of x is %d\n",*y);


    // //2
    // int  i= 10;
    // printf("The address of i is %p\n",&i);
    // padd(&i);


    // //3
    // int x = 5;
    // int l = x;
    // tenx( &l);
    // printf("The value of %d amd its 10x is %d\n",x,l);


    // //4
    // int x = 10;
    // pvbr(&x);
    // printf("%d\n",x);


    // //5
    // int a,b;
    // printf("Enter a and b: ");
    // scanf("%d %d",&a,&b);
    // printf("The sum of a and b is  %d\n",sum(&a,&b));
    // printf("The average of a and b is  %d\n",avg(&a,&b));

    // //6
    // int i = 9;
    // int *j= &i; 
    // int **k= &j;
    // printf("the value at i is %d\n",**k); 
    
    //7
    
    return 0;
}
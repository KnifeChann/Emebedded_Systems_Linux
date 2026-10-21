#include <stdio.h>

int callByValue(int a);
int callByReference(int *b);
int swap(int *x , int *y);



int callByValue(int a) {
    a=a+5;
    printf("The value of a inside call by value is : %d \n",a);
    return 0;
}

int callByReference(int *b) {
    *b=*b+5;
    printf("The value of b inside call by reference is : %d \n",*b);
    return 0;
}

int swap(int *x , int *y) {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;
}

int main() {
    int i=5;
    int *j=&i; //j is a pointer variable that stores the address of i
    printf("The value of i is : %d \n",i);
    printf("The value of j is : %d \n",*j);
    printf("The address of i is : %p \n",&i);
    printf("The address of j is : %p \n",j);
    
    //pointer to a pointer
    int **k=&j; //k is a pointer to a pointer variable that stores the address of j
    printf("The value of k is : %p \n",k);
    printf("The value of *k is : %p \n",*k);
    printf("The value of **k is : %d \n",**k);
    

    // call by value
    int a=10;
    printf("The value of a before call by value is : %d \n",a);
    callByValue(a);
    printf("The value of a after call by value is : %d \n",a);

    //call  by reference
    int b=10;
    printf("The value of b before call by reference is : %d \n",b);
    callByReference(&b);
    printf("The value of b after call by reference is : %d \n",b);


    int s=10,  l=20;
    swap(&s,&l);
    printf("The value of s after swapping is : %d \n",s);
    printf("The value of l after swapping is : %d \n",l);

    return 0;

}
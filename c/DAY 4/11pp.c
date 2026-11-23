#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. Write a program to dynamically create an array of size 6 capable of storing 6 integers.
    // 2. Use the array in Problem 1 to store 6 integers entered by the user.
    // 3. Solve Problem 1 using calloc() .
    // 4. Create an array dynamically capable of storing 5 integers. Now use realloc so that it
    // can now store 10 integers.
    // 5. Create an array of multiplication table of 7 up to 10 (7 × 10 = 70). Use realloc so that
    // it can store the multiplication table up to 15 (7 × 15 = 105).
    // 6. Attempt Problem 4 using calloc() .

    //1
    int n;
    int *ptr;
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;
    ptr[5] = 5;

    printf(" \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",ptr[i]);
    }

    //2
    int n;
    int *ptr;
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf(" \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",ptr[i]);
    }

    //3
    int n;
    int *ptr;
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;
    ptr[5] = 5;

    printf(" \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",ptr[i]);
    }

    // 4
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;
    ptr[5] = 5;

    n =10;
    ptr = (int *)realloc(ptr,10*sizeof(int));

    for (int i = 0; i < n; i++)

    {
        printf("%d \n", ptr[i]);
    }

    //5
    //till 10
    int n =10;
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ptr[i]);
    }

    printf(" \n");
    //till 15 now

    n=15;
    ptr = (int *)realloc(ptr,15*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ptr[i]);
    }

    printf(" \n");

    // 6
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf(" \n");
    n =10;
    ptr = (int * )realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf(" \n");
    
    
    










    return 0;
}
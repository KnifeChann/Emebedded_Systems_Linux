#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int n;
    // int *ptr;
    // scanf("%d",&n);
    // ptr = (int*)malloc(n* sizeof(int));

    // ptr[0] = 3;
    // ptr[1] = 4;

    // printf("%d %d \n",ptr[0],ptr[1]);

    // quick quiz
    //  Write a program to create a dynamic array of 5 floats using malloc().

    // float n;
    // float *ptr;
    // scanf("%f", &n);
    // ptr = (float *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("ENter your %d element: ", i + 1);
    //     scanf("%f", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%.2f ", ptr[i]);
    // }
    // printf(" \n");

    // quick quiz
    // Quick Quiz: Write a program to create an array of size n using calloc where n is an integer entered by the use

    // int arr;
    // int *ptr;
    // scanf("%d",&arr);

    // ptr = (int*)calloc(arr,sizeof(int));
    // for (int i = 0; i < arr-1; i++)
    // {
    //     printf("Enter the number in array %d \n",i+1);
    //     scanf("%d",&ptr[i]);
    // }

    // for (int i = 0; i < arr; i++)
    // {
    //     printf("%d \n",ptr[i]);
    // }
    
    
    // //freeptr
    // int arr;
    // int *ptr;
    // scanf("%d",&arr);

    // ptr = (int*)calloc(arr,sizeof(int));
    // for (int i = 0; i < arr-1; i++)
    // {
    //     printf("Enter the number in array %d \n",i+1);
    //     scanf("%d",&ptr[i]);
    // }

    // for (int i = 0; i < arr; i++)
    // {
    //     printf("%d \n",ptr[i]);
    // }
    // free(ptr);
    
    
    //relloc()
    int arr;
    int *ptr;
    scanf("%d",&arr);

    ptr = (int*)malloc(arr*sizeof(int));
    for (int i = 0; i < arr-1; i++)
    {
        printf("Enter the number in array %d \n",i+1);
        scanf("%d",&ptr[i]);
    }
    printf(" \n");
    
    ptr = (int*)realloc(ptr,2*sizeof(int));


    for (int i = 0; i < sizeof(ptr); i++)
    {
        printf("%d \n",ptr[i]);
    }
    free(ptr);
    
    



    return 0;
}
#include <stdio.h>

void printArray(int *i, int n); // function prototype
// or
void printArray(int i[], int n);

void revarr(int *arr, int n);
void revarr(int *arr, int n)
{
    int last = arr[n - 1];
    int first = arr[0];
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("arry after reverse: \n ");
    for (int i = 0; i < n; i++)
    {
        printf("[%d]", arr[i]);
    }
    printf("     \n");
}

int posint(int *arr,int n);
int posint(int *arr,int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            count++;
        }
    }
    return count;
    
}

int main()
{
    int marks[90]; // array with 90 elemnts
    marks[0] = 89;
    marks[1] = 88;
    printf("The marks in array with index 0 and 1 is %d %d\n", marks[0], marks[1]);

    int arry[] = {22, 33, 44, 55};

    // int *ptr = &arr[0];
    int *ptr = arry; // pointer pointing to the first addresss  of the array

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n and it's address is %p",i,marks[0],&marks[i]);
        printf("The marks at index %d is %d\n and it's address is %p",i,*ptr,&ptr[i]);
        ptr++;

    }

    Passing Array to Functions
    printArray(arr, n);             // function call

    quick quiz
        Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d
    array on the screen.

    int arr[3][2];

    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of array[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //print
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("[%d] ",arr[i][j]);

        }
        printf("\n");
    }

    practise set
    1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to
    the third element where ptr is a pointer pointing to the first element of the array.
    2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
    i. True.
    ii. False.
    iii. Depends.
    3. Write a program to create an array of 10 integers and store multiplication table of 5 in
    it.
    4. Repeat problem 3 for a general input provided by the user using scanf .
    5. Write a program containing a function which reverses the array passed to it.
    6. Write a program containing functions which counts the number of positive integers in
    an array.
    7. Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and
    9 respectively.
    8. Repeat problem 7 for a custom input given by the user.
    9. Create a three-dimensional array and print the addresses of its elements in increasing
    order.

    //1
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;

    printf("the value at ptr is %d\n",*ptr);
    ptr+=2;
    printf("the value at ptr is %d\n",*ptr);

    // 2
    // false

    //3
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i] = 5*(i+1);
    }
    printf("values in array are: ");
    for(int i = 0; i < 10; i++)
    {
        printf("[%d] ",arr[i]);
    }
    printf("\n");

    //4
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of arr %d: ",i);
        scanf("%d",&arr[i]);
    }
    //printing the array
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]",arr[i]);
    }

    // 5
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    // filling the array
    for (int i = 0; i < n; i++)
    {
        printf("Enter the values in the array %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("arry before reverse: \n ");
    for (int i = 0; i < n; i++)
    {
        printf("[%d]", arr[i]);
    }
    printf("     \n");

    revarr(arr, n);


    //6
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    // filling the array
    for (int i = 0; i < n; i++)
    {
        printf("Enter the values in the array %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("[%d]", arr[i]);
    }
    printf("     \n");


    printf("The positive nuumber si the rray is %d     \n",  posint(arr,n));
  

    //7
    //2,7,9
    int arr[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(i==0){
                arr[i][j] = 2*(j+1);
            }
            else if(i==1){
                arr[i][j] = 7*(j+1);
            }
            else if(i==2){
                arr[i][j] = 9*(j+1);
            }
        }   
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("[%d]",arr[i][j]);
        }
        printf("     \n");   
        
    }
    
    
    //8
    int a,b,c;
    printf("Enter the 3 values: ");
    scanf("%d %d %d",&a,&b,&c);
    int arr[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(i==0){
                arr[i][j] = a*(j+1);
            }
            else if(i==1){
                arr[i][j] = b*(j+1);
            }
            else if(i==2){
                arr[i][j] = c*(j+1);
            }
        }   
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("[%d]",arr[i][j]);
        }
        printf("     \n");   
        
    }


    //9
    int arr[3][3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("[%p]",&arr[i][j][k]);
            }
            printf("     \n");
            
        }
        
        printf("     \n");
    }
    
    
    return 0;
}
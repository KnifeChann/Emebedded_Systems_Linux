#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// strcutures

typedef struct Student
{
    char name[50];
    int roll;
    float marks;
} stu;

// function prototypying
void swap(char *a, char *b);
void rev(char *ch, int n);
void swapPointers(int **p1, int **p2);

// function defining
void swap(char *a, char *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rev(char *ch, int n)
{
    char *fptr = ch;
    char *rptr = &ch[n - 1];
    for (int i = 0; i < n / 2; i++)
    {
        swap(fptr, rptr);
        fptr++;
        rptr--;
    }
    char *ptr = ch;
    for (int i = 0; i < n; i++)
    {
        printf("%c", *ptr);
        ptr++;
    }
}

void swapPointers(int **p1, int **p2)
{
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void display(stu *ptr)
{
    printf("%s \n", ptr->name);
    printf("%d \n", ptr->roll);
    printf("%f \n", ptr->marks);
}

void updateMarks(stu *ptr)
{
    if (ptr->marks <= 95)
    {
        ptr->marks += 5;
    }
    else
    {
        ptr->marks = 100;
    }
}

void calculate(int a, int b, int *sum,
               int *diff, int *prod, float *quot)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    *quot = (float)a / b;
}

void *myMemcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    for (size_t i = 0; i < n; i++)
    {
        *d = *s;
        d++;
        s++;
    }

    return dest;
}

void *myMemset(void *dest, int value, size_t n)
{
    unsigned char *ptr = dest;

    for (size_t i = 0; i < n; i++)
    {
        *ptr = (unsigned char)value;
        ptr++;
    }

    return dest;
}


float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}


int main()
{

    //1
    //pointers
    int x = 5;
    int *ptr = &x;
    printf("%d \n",*ptr);

    //2
    int x = 5;
    int *ptr = &x;
    *ptr +=1;
    printf("%d \n",*ptr);

    //3
    int a=2, b=3;
    swap(&a,&b);
    printf("%d %d \n",a,b);

    //4
    int a=1, b=2;
    int *ptra = &a;
    int *ptrb = &b;
    int sum = *ptra + *ptrb;
    printf("%d \n",sum);

    //5
    int a=1,b=1;
    int *ptr1 = &a, *ptrb = &b;
    if(*ptr1>*ptrb){
        printf("%d \n",a);
    }
    else if( *ptr1< *ptrb){
        printf("%d \n",b);
    }
    else{
        printf("NONE \n");
    }

    //6
    int arr[10]={1,2,3,4,5};
    int *ptr= arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",*ptr);
        ptr++;
    }

    // 7
    int arr[10]={1,2,3,4,5};
    int *ptr= arr;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += *ptr++;
    }
    printf("%d \n",sum);

    // 8
    int arr[10]={5,3,9,1,5,6,8,7};
    int *ptr= arr;
    int max =INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if(*ptr<min){
            min = *ptr;
        }
        else if(*ptr > max){
            max = *ptr;
        }
        ptr++;
    }
    printf("THE MAX AND MIN IS %d and %d \n",max,min);

    //9
    int arr[]={1,8,9,32,1,4,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int * fptr = arr,*bptr =&arr[ n-1];
    for (int i = 0; i < n/2; i++)
    {
        if(fptr==bptr || fptr > bptr){
            break;
        }
        else{
            swap(fptr,bptr);
        }
        fptr++;
        bptr--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }

    // 10
    int arr[]={1,8,9,32,1,4,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr =arr;
    int ec=0;
    int oc=0;
    for (int i = 0; i < n; i++)
    {
        if(*ptr%2==0){
            ec++;
        }else{
            oc++;
        }
        ptr++;
    }
    printf("even count is: %d and Odd count is: %d \n",ec,oc);

    // 11
    char ch[]="Embedded Systems";
    char *ptr =ch;
    int count = 0;
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    printf("%d \n",count);

    // 12
    char ch[] = "EmbeddedSystems";
    char *ptr = ch;
    int n = sizeof(ch)/sizeof(ch[0])-1;
    printf("%d \n",n);
    rev(ch,n);

    //13
    char ch[] = "EmbeddedSystems";
    char *ptr = ch;
    int n = sizeof(ch)/sizeof(ch[0])-1;
    char copy[n+1];
    char *cptr = copy;
    for (int i = 0; i < n; i++)
    {
        *cptr = *ptr;
        cptr++;
        ptr++;
    }
    *cptr = '\0';
    cptr = copy;
    for (int i = 0; i < n; i++)
    {
        printf("%c" ,*cptr);
        cptr++;
    }

    // 14
    char str1[] = "Hello";
    char str2[] = "Hello0";

    char *ptr1 = str1;
    char *ptr2 = str2;

    while(*ptr1!='\0' && *ptr2!='\0'){
        if(*ptr1 != *ptr2){
            break;
        }
        ptr1++;
        ptr2++;
    }

    if(*ptr1=='\0' && *ptr2=='\0'){
        printf("SAME \n");
    }
    else{
        printf("NOT SAME \n");

    }

    //15
    char str[]="Embedded Systems";
    char *ptr = str;
    int vowel =0;
    int consonent =0;
    int spaces =0;
    while(*ptr!='\0'){
        if(*ptr=='a'|| *ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u' || *ptr=='A'|| *ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'){
            vowel++;
        }
        else if(*ptr==' '){
            spaces++;
        }
        else if(*ptr>='a'&&*ptr<='z' || *ptr>='A'&&*ptr<='Z'){
            consonent++;
        }
        ptr++;
    }
    printf("Vowels: %d Consonets; %d Spaces: %d \n",vowel,consonent,spaces);

    // 16
    int arr[] = {1, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int lar = *ptr;
    int seclar = INT_MIN;
    int found = 0;
    ptr++;
    while (ptr < arr + n)
    {
        if (*ptr > lar)
        {
            seclar = lar;
            lar = *ptr;
            found = 1;
        }
        else if (*ptr < lar && (!found || *ptr > seclar))
        {
            seclar = *ptr;
            found = 1;
        }
        ptr++;
    }
    printf("Largest: %d\n", lar);
    if (found)
    {
        printf("Second largest: %d\n", seclar);
    }
    else
    {
        printf("No second largest\n");
    }

    //17
    int arr[] = {1,6,8,4,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        int *ptr = &arr[i];
        for (int j = i+1; j < n; j++)
        {
            int *pto = ptr + (j - i);
            if(*ptr > *pto){
                int temp = *ptr;
                *ptr = *pto;
                *pto = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    // 18
    int arr[] = {1,6,8,4,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int target = 9;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if(*ptr == target){
            printf("INDEX: %d \n",i);
            flag  = true;
            break;
        }
        ptr++;
    }
    if(flag){
        printf("FOUND \n");
    }
    else{
        printf("NOT FOUND \n");

    }

    //19
    char ch[] = "MADAM";
    int n = sizeof(ch)-1;
    char *sptr = ch;
    char *eptr = &ch[n-1];
    bool flag =false;
    while( sptr <eptr ){
        if(*sptr != *eptr){
            flag = true;
            break;
        }
        sptr++;
        eptr--;
    }
    if(flag){
        printf("NOT PALINDROME \n");
    }else{
        printf("PALINDROME \n");

    }

    //20
    char start[50] ="Embedded";
    char end[] ="Systems";
    char *ptr1 = start;
    char *ptr2 = end;

    while(*ptr1!='\0'){
        ptr1++;
    }
    while(*ptr2!='\0'){
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1='\0';

    printf("%s \n",start);

    //21
    int x =10;
    int *y = &x;
    int **z =&y;
    **z*=5;
    printf("%d \n",**z);

    // 22
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;
    int *temp= malloc(n * sizeof(int));
    int *ptr = temp;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d value of the array ",i);
        scanf("%d",ptr);
        sum+=*ptr;
        ptr++;
    }
    free(temp);
    printf("SUM: %d \n",sum);

    //23
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;
    int *temp= calloc(n , sizeof(int));
    int *ptr = temp;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d value of the array ",i);
        scanf("%d",ptr);
        sum+=*ptr;
        ptr++;
    }
    free(temp);
    printf("SUM: %d \n",sum);

    // 24
    int n;
    printf("Enter n: ");

    if (scanf("%d", &n) != 1 || n <= 0 ||
        (size_t)n > SIZE_MAX / sizeof(int))
    {
        printf("Invalid size\n");
        return 1;
    }

    int *temp = malloc(n * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    int *ptr = temp;

    // Accept original elements
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        if (scanf("%d", ptr) != 1)
        {
            free(temp);
            return 1;
        }
        ptr++;
    }

    // Print original array
    ptr = temp;

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    // Accept new size
    int x;
    printf("\nEnter the new size: ");

    if (scanf("%d", &x) != 1 || x <= n ||
        (size_t)x > SIZE_MAX / sizeof(int))
    {
        printf("Invalid new size\n");
        free(temp);
        return 1;
    }

    // Reallocate memory safely
    int *newptr = realloc(temp, x * sizeof(int));

    if (newptr == NULL)
    {
        printf("Reallocation failed\n");
        free(temp);
        return 1;
    }

    temp = newptr;

    // Point to the first newly allocated element
    ptr = temp + n;

    for (int i = n; i < x; i++)
    {
        printf("Enter element %d: ", i);
        if (scanf("%d", ptr) != 1)
        {
            free(temp);
            return 1;
        }
        ptr++;
    }

    // Reset pointer before printing
    ptr = temp;

    printf("Resized array: ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");

    free(temp);

    // 25
    int a = 10, b = 20;

    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Before swapping:\n");
    printf("ptr1: %d\n", *ptr1);
    printf("ptr2: %d\n", *ptr2);

    swapPointers(&ptr1, &ptr2);

    printf("After swapping:\n");
    printf("ptr1: %d\n", *ptr1);
    printf("ptr2: %d\n", *ptr2);

    printf("Original variables:\n");
    printf("a: %d, b: %d\n", a, b);

    //26
    stu s1,s2;
    stu * p1 = &s1;
    stu * p2 = &s2;

    strcpy(p1->name,"Aryan");
    p1->roll = 15;
    p1->marks = 85.5;
    updateMarks(p1);
    display(p1);

    strcpy(p2->name,"Bryan");
    p2->roll = 25;
    p2->marks = 81.5;
    updateMarks(p2);
    display(p2);

    // 27
    int a, b;
    int sum, diff, prod;
    float quot;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    calculate(a, b, &sum, &diff, &prod, &quot);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quot);

    // 28
    int source[] = {10, 20, 30, 40, 50};
    int destination[5];

    int n = sizeof(source) / sizeof(source[0]);

    myMemcpy(destination, source, sizeof(source));

    printf("Source array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(source + i));
    }

    printf("\nDestination array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(destination + i));
    }

    printf("\n");

    // 29
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    myMemset(arr, 0, sizeof(arr));

    printf("\nAfter: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    // 30
    float a, b;
    char op;

    // Function pointer declaration
    float (*operation)(float, float) = NULL;

    printf("Enter first number: ");
    if (scanf("%f", &a) != 1)
        return 1;

    printf("Enter second number: ");
    if (scanf("%f", &b) != 1)
        return 1;

    printf("Enter operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1)
        return 1;

    switch (op)
    {
    case '+':
        operation = add;
        break;

    case '-':
        operation = subtract;
        break;

    case '*':
        operation = multiply;
        break;

    case '/':
        if (b == 0)
        {
            printf("Division by zero is not allowed.\n");
            return 1;
        }

        operation = divide;
        break;

    default:
        printf("Invalid operator.\n");
        return 1;
    }

    // Calling the selected function using a pointer
    float result = operation(a, b);

    
    printf("Result: %.2f\n", result);

        return 0;
}
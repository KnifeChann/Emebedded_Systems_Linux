#include <stdio.h>

#include <stdio.h>

int main()
{

    // //1
    // unsigned int a,b;
    // printf("Enter a and b: ");
    // scanf("%u %u",&a,&b);
    // printf("AND: %u \n",a&b);
    // printf("OR: %u \n",a|b);
    // printf("XOR: %u \n",a^b);

    // //2
    // unsigned int n;
    // printf("Enter n:  \n");
    // scanf("%u",&n);
    // printf("The not of %u is %u \n",n,(__uint8_t)~n);

    // //3
    // unsigned int n;
    // unsigned int shift;
    // printf("Enter n:  \n");
    // scanf("%u",&n);
    // printf("Enter shift:  \n");
    // scanf("%u",&shift);
    // printf("Result: %u\n", n << shift);

    // //4
    // unsigned int n;
    // unsigned int shift;
    // printf("Enter n:  \n");
    // scanf("%u",&n);
    // printf("Enter shift:  \n");
    // scanf("%u",&shift);
    // printf("Result: %u\n", n >> shift);

    // //5
    // unsigned int n;
    // printf("Enter n:  \n");
    // scanf("%u",&n);
    // if((n & 1) ==0){
    //     printf("EVEN \n");
    // }else{
    //     printf("ODD \n");
    // }

    // // 6
    // unsigned int n,m;
    // printf("Enter n and m: ");
    // scanf("%u %u", &n,&m);
    // printf("Answer is: %u \n",n<<m);

    // //7
    // unsigned int n,m;
    // printf("Enter n and m: ");
    // scanf("%u %u", &n,&m);
    // printf("Answer is: %u \n",n >> m);

    // //8
    // unsigned int n,m;
    // printf("Enter n and m: ");
    // scanf("%u %u", &n,&m);
    // n = n^m;
    // m = n^m;
    // n = n^m;
    // printf("%u %u \n",n,m);

    // // 9
    // unsigned int n;
    // printf("Enter n: ");
    // scanf("%u", &n);
    // for (int i = 0; i < 8; i++)
    // {
    //     if ((n >> (i)) & 1 == 1)
    //     {
    //         printf("1");
    //     }
    //     else
    //     {
    //         printf("0");
    //     }
    // }
    // printf(" \n");

    // // 10
    // unsigned int n;
    // printf("Enter n: ");
    // scanf("%u", &n);
    // int count=0;
    // if (n > 255)
    // {
    //     printf("enter greater than 0 and less than 255 \n");
    //     return 1;
    // }
    // else
    // {
    //     for (int i = 0; i < 8; i++)
    //     {
    //         if ((n >> i) & 1u == 1u)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // printf(" %d\n",count);

    // //11
    // unsigned int n;
    // printf("Enter n: ");
    // scanf("%u", &n);
    // int count=0;
    // if (n > 255)
    // {
    //     printf("enter greater than 0 and less than 255 \n");
    //     return 1;
    // }
    // else
    // {
    //     for (int i = 0; i < 8; i++)
    //     {
    //         if (((n >> i) & 1u) == 0)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // printf(" %d\n",count);

    // //12
    // unsigned int n;
    // int count = 0;
    // printf("Enter n: ");
    // if (scanf("%u", &n) != 1 || n > 255)
    // {
    //     printf("Invalid input\n");
    //     return 1;
    // }
    // for (int i = 16; i >= 0; i--)
    // {
    //     if (((n >> i) & 1u) == 1u)
    //     {
    //         count++;
    //     }
    // }
    // if (count == 1)
    // {
    //     printf("YES\n");
    // }
    // else
    // {
    //     printf("NO\n");
    // }

    // //13
    // unsigned int n;
    // int count = 0;
    // printf("Enter n: ");

    // if (scanf("%u", &n) != 1)
    // {
    //     printf("Invalid input\n");
    //     return 1;
    // }
    // while (n != 0)
    // {
    //     n = n & (n - 1);
    //     count++;
    // }
    // printf("Set bits: %d\n", count);

    // // 14
    // int a,b;
    // printf("Enter a and b: ");
    // if (scanf("%d %d", &a, &b) != 2)
    // {
    //     printf("Invalid input\n");
    //     return 1;
    // }
    // if (a == 0 || b == 0)
    // {
    //     printf("Zero detected\n");
    // }
    // else if ((a ^ b) < 0)
    // {
    //     printf("Opposite signs\n");
    // }
    // else
    // {
    //     printf("Same signs\n");
    // }

    // //15
    // int arr[] = {4, 2, 7, 2, 4};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int unique = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     unique = unique ^ arr[i];
    // }
    // printf("Unique element: %d\n", unique);


    return 0;
}

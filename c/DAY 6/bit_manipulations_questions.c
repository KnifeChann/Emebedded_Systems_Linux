#include <stdio.h>

int main()
{
    // 1
    unsigned int n = 10;
    unsigned k = 2;
    n |= (1u << k);
    for (int i = 7; i >= 0; i--)
    {
        printf("%u", (n >> i) & 1u);
    }
    printf(" \n");
    printf("%u \n", n);

    // 2
    unsigned int n = 14;
    unsigned int k = 2;
    n &= ~(1 << k);
    printf("%u \n", n);

    // 3
    unsigned int n = 10;
    unsigned int k = 1;
    n ^= (1 << k);
    printf("%u \n", n);

    // 4
    unsigned int n = 10;
    unsigned int k = 2;
    if (n & (1u << k))
    {
        printf("Bit %u is SET \n", k);
    }
    else
    {
        printf("Bit %u is CLEAR \n", k);
    }

    // 5
    unsigned int n = 10;
    unsigned int k = 2;
    unsigned int m = 4;
    n |= (1 << k) | (1 << m);
    printf("%u \n", n);

    // 6
    unsigned int n = 255;
    unsigned int k = 2;
    unsigned int m = 5;
    n &= ~((1 << k) | (1 << m));
    printf("%u \n", n);

    // 7
    unsigned int n = 10;
    unsigned int k = 1;
    unsigned int m = 4;
    n ^= (1 << k) | (1 << m);
    printf("%u \n", n);

    // 8
    unsigned int n = 26;
    unsigned int k = 1;
    unsigned int m = 4;
    unsigned int mask = (1u << k) | (1u << m);
    if ((n & mask) == mask)
    {
        printf("BOTH SET \n");
    }
    else
    {

        printf("NOT BOTH SET \n");
    }

    // 9
    unsigned int n = 10;
    unsigned int k = 1;
    unsigned int m = 4;
    unsigned int mask = (1u << k) | (1u << m);
    if ((n & mask) == mask)
    {
        printf("BOTH SET \n");
    }
    else if ((n & (1u << k)) | (n & (1u << m)))
    {
        printf("ATLEAST ONE SET \n");
    }
    else
    {
        printf("NOT BOTH SET \n");
    }

    // 10
    unsigned int n = 182;
    unsigned int mask = 0x0F;
    unsigned int lower = n & mask;
    printf("Lower nibble: %u\n", lower);

    // 11
    unsigned int n = 182;
    unsigned int mask = 0xF0;
    ;
    unsigned int upper = (n & mask) >> 4;
    printf("Lower nibble: %u\n", upper);

    // 12
    unsigned int n = 182;
    unsigned int start = 2;
    unsigned int width = 3;
    unsigned int mask = (1u << width) - 1u;
    unsigned int result = (n >> start) & mask;
    printf("%u\n", result);

    // 13
    unsigned int n = 182;
    unsigned int start = 2;
    unsigned int width = 3;
    unsigned int value = 2;
    unsigned int mask = (1u << width) - 1u;
    mask = mask << start;
    n &= ~mask;
    n |= (value << start);
    printf("%u \n", n);

    // 14
    unsigned int DDR = 0x00;
    DDR |= (1 << 2) | (1 << 4) | (1 << 5);
    DDR &= ~(1 << 4);
    DDR ^= (1 << 7);

    for (int i = 7; i >= 0; i--)
    {
        printf("%u", (DDR >> i) & 1u);
    }
    if (DDR & (1 << 5))
    {
        printf("YES \n");
    }
    else
    {
        printf("NO \n");
    }
    printf(" \n");
    printf("%u \n", DDR);

    // 15
    unsigned int CTRL = 0x00;
    // 0 peripheral
    // 1  interupt
    // 2-4 OPerating mode
    // 5 DMA
    // 6 rest control
    // 7 reserved

    // 1
    CTRL |= (1 << 0);

    // 2
    CTRL |= (1 << 1);

    // 3
    CTRL |= (1 << 5);

    // 4
    unsigned int val = 5;
    unsigned int mask = ((1u << 3) - 1u) << 2;
    CTRL &= ~mask;
    CTRL |= (val << 2);

    // 5
    CTRL &= ~(1 << 1);

    // 6
    CTRL ^= (1 << 6);

    // 7
    if (CTRL & (1 << 0))
    {
        printf("YES \n");
    }
    else
    {
        printf("NO \n");
    }

    // 8
    unsigned int extracted_mode = (CTRL >> 2) & ((1u << 3) - 1u);
    printf("Operating mode: %u\n", extracted_mode);

    // 9
    for (int i = 7; i >= 0; i--)
    {
        printf("%u", (CTRL >> i) & 1u);
    }
    printf(" \n");
    printf("%u \n", CTRL);

    return 0;
}
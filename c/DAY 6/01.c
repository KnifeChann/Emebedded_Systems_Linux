#include <stdio.h>

int main() {

    //bit setting
    int x = 0x00000000;
    x = 1<<16;
    printf("x = %x\n",x);
    x = (1<<16) | (1<<17);
    printf("x = %x\n",x);
    x = (1<<16) | (1<<17)| (1<<18)| (1<<19);
    printf("x = %x\n",x);
    

    printf(" \n");
    //bit clearing
    x = 0xffffffff;
    x&=~(1<<16) ;
    printf("x = %x\n",x);
    x&=~ ((1<<16) |(1<<17)) ;
    printf("x = %x\n",x);
    x&=~ ((1<<16) |(1<<17)|(1<<18)) ;
    printf("x = %x\n",x);
    x&=~ ((1<<16) |(1<<17)|(1<<18)|(1<<19)) ;
    printf("x = %x\n",x);


    printf(" \n");
    //toggle bits
    x =0;
    for (int i = 0; i < 15; i++)
    {
        x ^= (1<<16);
        printf("x = %x \n",x);
    }
    

    return 0;
}
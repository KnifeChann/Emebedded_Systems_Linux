#include <stdio.h>

int main(int argc, char *argv[])
{
    //CLA
    int i;
    printf("Total arguments: %d \n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d :%s \n",i,argv[i]);
    }

    return 0;
}
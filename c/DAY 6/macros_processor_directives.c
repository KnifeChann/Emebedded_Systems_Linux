#include <stdio.h>

#define HRA 0.20
#define PF 0.30

#define ADMIN

#define PI 3.14

#define Sqaure(x) (x*x)

int main(int argc, char *argv[])
{
    // //normal expmaples of presprocessor directives
    // int basSal = 20000;
    // int totalSal;
    // totalSal = basSal + (basSal* HRA)+ (basSal* PF);
    // printf(" Total Salaray is %d\n",totalSal);

    // // defined if
    // #ifdef ADMIN
    //     printf("You are an admin \n");
    // #else
    //     printf("You are a user \n");
    // #endif


    // // macros
    // // object-like macros
    // float r = 5;
    // float h = 10;
    // float areaCircle = PI*r*r;
    // printf("Area: %f \n",areaCircle);
    // float areaCYlinder = PI*r*r*h;
    // printf("Area: %f \n",areaCYlinder);
    // //function like macros
    // int num = 7;
    // printf("Sqqaure: %d \n",Sqaure(num));

    //myp 
    int i;
    printf("Total arguments: %d \n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d :%s \n",argc,argv[i]);
    }
    


    return 0;
}
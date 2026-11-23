#include <stdio.h>
#include <string.h>
//structures
struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

//function prototypes
void showstruct(struct employee ); // function prototype

//functions
void showstruct(struct employee e){
    printf("%d %f %s \n",e.code,e.salary, e.name);
}


int main()
{
    // struct employee e1 ,e2;
    // e1.code = 4511;
    // strcpy(e1.name,"Aryan");
    // e1.salary = 54.44;

    // printf("%d %f %s \n",e1.code,e1.salary, e1.name);

    // //quick quiz
    // struct employee e1,e2,e3;

    // printf("Enter the name of emplyee 1 \n");
    // scanf("%s",e1.name);
    // printf("Enter the code of emplyee 1  \n");
    // scanf("%d",&e1.code);
    // printf("Enter the salary of emplyee 1  \n");
    // scanf("%f",&e1.salary);
    // printf("%d %f %s \n",e1.code,e1.salary, e1.name);

    // printf("Enter the name of emplyee 2  \n");
    // scanf("%s",e2.name);
    // printf("Enter the code of emplyee 2  \n");
    // scanf("%d",&e2.code);
    // printf("Enter the salary of emplyee2   \n");
    // scanf("%f",&e2.salary);
    // printf("%d %f %s \n",e1.code,e1.salary, e1.name);

    // printf("Enter the name of emplyee 3 \n");
    // scanf("%s",e3.name);
    // printf("Enter the code of emplyee 3  \n");
    // scanf("%d",&e3.code);
    // printf("Enter the salary of emplyee 3  \n");
    // scanf("%f",&e3.salary);
    // printf("%d %f %s \n",e1.code,e1.salary, e1.name);
    
    // struct employee facebook[100]; // an array of structures
    // // We can access the data using:
    // facebook[0].code = 100;
    // facebook[1].code = 101;
    // // And so on
    
    // struct employee aryan = {"Aryan",001,88.99};
    // printf("%d %f %s \n",aryan.code,aryan.salary, aryan.name);

    // struct employee e1;
    // struct employee *ptr;
    // e1.code  = 11;
    // ptr = &e1;
    // printf("%d \n",(*ptr).code);
    // printf("%d \n",ptr->code);


    struct  employee e1,e2,e3;
    strcpy(e1.name,"Aryan");
    e1.code = 1;
    e1.salary= 44.44;
    strcpy(e2.name,"Kishan");
    e2.code = 2;
    e2.salary= 34.44;
    strcpy(e3.name,"NAryan");
    e3.code = 3;
    e3.salary= 24.44;

    showstruct(e1);
    showstruct(e2);
    showstruct(e3);

    return 0;
}
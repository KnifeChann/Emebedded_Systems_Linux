#include <stdio.h>

int main()
{

    // 1. Write a program to read three integers from a file.
    // 2. Write a program to generate multiplication table of a given number in text format.
    // Make sure that the file is readable and well formatted.
    // 3. Write a program to read a text file character by character and write its content twice in
    // separate file.
    // 4. Take name and salary of two employees as input from the user and write them to a
    // text file in the following format:
    // i. Name1, 3300
    // ii. Name2, 7700
    // 5. Write a program to modify a file containing an integer to double its value.
    
    // //1
    // FILE *ptr;
    // ptr = fopen("file.txt","r");
    // int i=0;
    // int num= 0;
    // while(i<3){
    //     fscanf(ptr,"%d",&num);
    //     printf("%d \n",num);
    //     i++;
    // }

    // //2
    // FILE * ptr;
    // ptr= fopen("file.txt","w");
    // int n;
    // printf("Enter n: ");
    // scanf("%d",&n);

    // for (int i = 0; i < 10; i++)
    // {
    //     fprintf(ptr,"%d x %d = %d\n",n,(i+1),n*(i+1));
    // }

    // //3
    // char  ch;
    // FILE *ptr;
    // FILE *ptr2;
    // ptr = fopen("file.txt","r");
    // ptr2 = fopen("wfile.txt","a");
    // while (1)
    // {
    //     if(ch == EOF){
    //         break;
    //     }
    //     else{
    //         ch = fgetc(ptr);
    //         fprintf(ptr2,"%c ",ch);
    //         fprintf(ptr2,"%c ",ch);
    //     }
    // }
    // fclose(ptr);
    // fclose(ptr2);

    // //4
    // int num;
    // printf("How many emplyees:  \n");
    // scanf("%d",&num);
    
    // FILE *ptr;
    // ptr = fopen("employee_info","w");

    // for (int i = 0; i < num; i++)
    // {
    //     char name[10];
    //     printf("Enter emplyee %d name :  \n",i+1);
    //     scanf("%s",name);
        
    //     int salary;
    //     printf("Enter emplyees salary:  \n");
    //     scanf("%d",&salary);

    //     fprintf(ptr,"%s , %d\n",name,salary);
    // }
    // fclose(ptr);

    //5
    FILE *ptr;
    ptr =fopen("integers.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    fclose(ptr);

    ptr = fopen("integers.txt","w");
    fprintf(ptr,"%d",num*2);



    return 0;
}
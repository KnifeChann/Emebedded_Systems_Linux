#include <stdio.h>

int main()
{
    // FILE *ptr;
    // ptr = fopen("aryan.txt","r");
    // int num;
    // fscanf(ptr,"%d",&num);
    // printf("the value of num is %d \n",num);

    // fscanf(ptr,"%d",&num);
    // printf("the value of num is %d \n",num);
    
    // FILE *ptr;
    // ptr = fopen("aryan.txt", "r");
    


    // //reading from a file
    // if (ptr == NULL)
    // {
    //     printf("The file doesn't exist sorry!  \n");
    // }
    // else
    // {
    //     int num;
    //     fscanf(ptr, "%d", &num);
    //     printf("the value of num is %d \n", num);
    //     fscanf(ptr, "%d", &num);
    //     printf("the value of num is %d \n",num);

    //     fclose(ptr);
    // }

    // //writing to a file
    // FILE *fptr;
    // fptr = fopen("aryan.txt","w");
    // int num = 432;
    // fprintf(fptr,"%d",num);
    // fclose(fptr); 
    
    // //append to a file
    // FILE *fptr;
    // fptr = fopen("aryan.txt","a");
    // int num = 432;
    // fprintf(fptr,"%d",num);
    // fclose(fptr); 

    // //fgetc() and fputc()
    // FILE *ptr;
    // ptr = fopen("aryan.txt","r");
    // char c = fgetc(ptr);
    // printf("%c \n",c);    
    
    
    // ptr = fopen("aryan.txt","a");
    // fputc('c',ptr);
    
    //reading  file character by character
    char ch;
    FILE *ptr;
    ptr = fopen("aryan.txt","r");
    while(1){
        ch = fgetc(ptr);
        printf("%c ",ch);

        if(ch==EOF){
            break;
        }
    }
    
    return 0;
}
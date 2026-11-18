#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int min =1, max =100;
    int rannum = (rand() % (max - min + 1)) + min;

    
    int num;
    printf("I have generated a number between 1 and 100\n");
    printf("Can you guess it?\n");
    int count=1;
    while(1){
        printf("Enter your guess: ");
        scanf("%d",&num);
        if(num<rannum){
            printf("Higher number please \n");
        }
        else if(num>rannum){
            printf("Lower number please \n");
        }
        else{
            printf("Congratulations! You guessed the number %d\n",rannum);
            break;
        }
        count++;
    }

    printf("You took %d attempts",count);

    return 0;
}
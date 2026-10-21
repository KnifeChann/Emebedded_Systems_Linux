#include <stdio.h>

int main() {
    printf("happy birthday\n");
    printf("happy birthday\n");
    printf("happy birthday\n");
    printf("happy birthday\n");

    printf("\n");
    for(int i=0; i<5; i++) {
        printf("happy birthday\n");
    }
    printf("\n");
    int x = 0;
    while(x < 5) {
        printf("happy birthday\n");
        x++;
    }
    
    printf("\n");
    
    do
    {
        printf("happy birthday\n");
        
    } while (x<1);
    
    printf("\n");
    while(1){
        printf("happy birthday\n");
        break;
    }
    int n=10;
    for(int i=n;i>0;i--){
        printf("10 X %d = %d\n", i, 10*i);
    }
    printf("\n");
    for(int i=1;i<=10;i++){
        printf("10 X %d = %d\n", i, 10*i);
    }

    return 0;
}
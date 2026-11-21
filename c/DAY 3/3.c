#include <stdio.h>
#include <string.h>

int stringlen(char *str)
{
    char *ptr = &str[0];
    int count = 0;
    while (*ptr != 0)
    {
        count++;
        ptr++;
    }
    return count;
}

void slice(char *str, int n, int m)
{
    size_t len = strlen(str);

    if (n < 0 || m < n || (size_t)m > len)
        return;

    size_t count = (size_t)(m - n);
    memmove(str, str + n, count);
    str[count] = '\0';
}

void strcopy(char *target, char *source)
{
    for (int i = 0; i < strlen(source); i++)
    {
        target[i] = source[i];
    }
    target[strlen(source)] = '\0';
}

void occu(char *str, char x)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == x)
        {
            count++;
        }
    }
    printf("The occurance of %c in the string is %d \n", x, count);
}

int main()
{
    // char st[10];

    // if (fgets(st, sizeof st, stdin))
    //     printf("%s", st);

    // puts(st);
    // printf("FA ME");

    // char st[] = "wassupshwaty";

    // printf("%zu \n",strlen(st));

    // char source[] = "Aryan";
    // char target[30];
    // char next[] = " good";

    // strcpy(target, source);

    // printf("%s\n", target);
    // strcat(target, next);
    // printf("%s \n", target);

    // char a[] = "xryan";
    // char b[] = "ryan";
    // strcmp(a, b);
    // printf("%d \n", strcmp(a, b));

    // 1. Which of the following is used to appropriately read a multi-word string.
    // 1. gets()
    // 2. puts()
    // 3. printf()
    // 4. scanf()
    // 2. Write a program to take string as an input from the user using %c and %s and
    // confirm that the strings are equal.
    // 3. Write your own version of strlen function from <string.h> .
    // 4. Write a function slice() to slice a string. It should change the original string such
    // that it is now the sliced string. Take m and n as the start and ending position for
    // slice.
    // 5. Write your own version of strcpy function from <string.h> .
    // 6. Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
    // 7. Write a program to decrypt the string encrypted using encrypt function in problem 6.
    // 8. Write a program to count the occurrence of a given character in a string.
    // 9. Write a program to check whether a given character is present in a string or not.

    // 1
    //  gets()

    // //2
    // char s1[5];
    // char s2[5];
    // printf("Enter the strings");
    // scanf("%s",s1);
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%c",s1[i]);
    // }

    // printf("%d \n",strcmp(s1,s2));

    // 2
    // char str1[6];
    // char str2[6];

    // printf("Enter a word with exactly 5 characters: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     if (scanf("%c", &str1[i]) != 1)
    //         return 1;
    // }
    // str1[5] = '\0';

    // printf("Enter the second word: ");
    // if (scanf("%5s", str2) != 1)
    //     return 1;

    // printf("%d\n", strcmp(str1, str2));

    // //3
    // char str[]="Aryan";

    // printf("%zu \n",strlen(str));
    // printf(" \n");
    // printf("%d \n",stringlen(str));

    // // 4
    //  int n,m;
    //  printf("Enter n and m \n");
    //  scanf("%d %d",&n,&m);
    //  char str[100];
    //  scanf("%s",str);

    // printf("String before slicing \n");

    // printf("%s \n",str);

    // printf("String before slicing \n");
    // slice(str,n,m);
    // printf("%s \n",str);

    // //5
    // //strcppy
    // char source[]="faaaame";
    // char target[30];
    // strcopy(target,source);

    // printf("%s\n",target);

    // //6
    // char str[]="Aryan";
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     str[i]+=1;
    // }
    // printf("%s\n",str);

    // //7
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     str[i]-=1;
    // }
    // printf("%s\n",str);

    // // 8
    // char str[100];
    // char chara;

    // printf("Enter the string:\n");
    // if (scanf("%99s", str) != 1)
    //     return 1;

    // printf("Enter the character:\n");
    // if (scanf(" %c", &chara) != 1)
    //     return 1;

    // occu(str, chara);

    //9
    char str[] ="hello suck ma dick";
    char ch = 'h';
    bool flag  = false;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[0]==ch){
            flag = true;
            break;
        }
        
    }
    if(flag){
        printf("YES \n");
    }
    else{
        printf("NO \n");

    }
    

    return 0;
}
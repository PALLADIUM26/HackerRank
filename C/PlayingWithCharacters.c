#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    // char ch[100];
    char ch;
    char ch2[100];
    char ch3[100];
    scanf("%c",&ch);
    scanf("\n");
    // scanf("%[^\n]%*c", &ch);
    scanf("%[^\n]%*c", &ch2);
    scanf("%[^\n]%*c", &ch3);
    
    // printf(ch);
    printf("%c",ch);
    printf("\n");
    printf(ch2);
    printf("\n");
    printf(ch3);
    return 0;
}


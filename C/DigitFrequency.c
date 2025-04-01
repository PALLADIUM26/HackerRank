#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1000];
    gets(str);
    // scanf("%s", s);
    // printf(str);
    int l = strlen(str);
    
    int a[10];
    for (int i=0; i<10; i++){
        a[i] = 0;
    }
    
    for(int i=0; i<l; i++){
        if(isdigit(str[i])){
            int x;
            x = str[i]-'0';
            a[x]++;
        }
    }
    for (int i=0; i<10; i++){
        printf("%d ",a[i]);
    }
    return 0;
}

// 0 1 2 3 4 5 6 7 8 9
// 0 2 1 0 1 1 1 1 0 0

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int flag = 0;
    int c = *a;
    if(*a>*b)
        flag = 1;
        
    *a = *a + *b;
    
    if(flag==1)
        *b = c - *b;
    else
        *b = *b - c;
}

int main() {
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    update(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
}

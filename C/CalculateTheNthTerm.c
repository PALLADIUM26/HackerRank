#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int s;
    if (n==1){
        s = a;
    }
    else if (n==2){
        s = b;
    }
    else if(n == 3){
        s = c;
    }
    else{
        for (int i=4;i<=n;i++){
            s = a+b+c;
            a = b;
            b = c;
            c = s;
        }
    }
    
    
    return s;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}


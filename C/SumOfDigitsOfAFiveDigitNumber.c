#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int dig = 0;
    int s = 0;
    while(n>0){
        dig = n%10;
        s += dig;
        n /= 10;
    }
    printf("%d",s);
    return 0;
}


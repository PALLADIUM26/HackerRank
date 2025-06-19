#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, pos = 0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    int* arr2;
    arr2 = (int*) malloc(num * sizeof(int));
    int p = 0;
    for (int i=num-1; i>-1; i--){
        arr2[p] = arr[i];
        p++;
    }
    for (int i=0; i<num; i++){
        arr[i] = arr2[i];
    }


    /* Write the logic to reverse the array. */
    // for(i=num-1 ;i>=0; i++){
    //     arr[pos] = arr[i];
    // }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    // s = s + " ";
    char* word = "";
    int l = strlen(s);
    for (int i=0; i<l; i++){
        if (s[i]==' '){
            printf("\n");
            // word = "";
        }
        if (s[i]!=' '){
            printf("%c", s[i]);
            // word = word + s[i];
            // printf("%s\n", word);
            // strncat(s, s[i], 1);
        }
    }
    printf("%s",word);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int l = strlen(s), i;
    for(i=0;i<l;i++){
        if(s[i] == ' ')printf("%c",'\n');
        else printf("%c",s[i]);
    }
    free(s);
    //Write your logic to print the tokens of the sentence here.
    return 0;
}

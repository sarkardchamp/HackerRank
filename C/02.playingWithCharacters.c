#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100], sen[100];
    scanf("%c",&ch);
    scanf("\n%[^\n]%*c",s);
    scanf("\n%[^\n]%*c",sen);

    printf("%c\n",ch);
    printf("%s",s);
    printf("\n%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,l, freq[10];
    for(i=0;i<10;++i)freq[i] = 0;
    char num[1000];
    scanf("%s",num);
    l = strlen(num);
    for(i=0;i<l;i++){
        if(num[i]>='0' && num[i]<='9'){
            freq[(int)(num[i] - '0')]++;
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",freq[i]);
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

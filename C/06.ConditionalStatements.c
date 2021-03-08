#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n;
    char arr[10][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d", &n);
    if(n>9)printf("Greater than 9");
    else if(n>=1 && n<=9){
        printf("%s",arr[n-1]);
    }
}

#include <stdio.h>
#include <math.h>
int max(int a, int b){
    return (a > b)?a:b;
}

int main(){
    int n,i,j;
    scanf("%d", &n);
    for(i=n-1;abs(i)<n;i--){
        for(j=n-1;abs(j)<n;j--){
            printf("%d ", max(abs(i)+1,abs(j)+1));
        }
        printf("\n");
    }
}

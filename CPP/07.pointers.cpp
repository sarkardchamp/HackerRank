#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int temp = *a;
    int temp2 = *b;
    *a = temp + temp2;
    if((temp-temp2)<0){
        *b = (temp2-temp);
    }else *b = (temp-temp2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

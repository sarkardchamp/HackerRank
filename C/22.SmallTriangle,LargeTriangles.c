#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
float area(triangle a){
    int ia = a.a,ib = a.b, ic = a.c;
    float s = (ia+ib+ic)/2.0;
    return s*(s-ia)*(s-ib)*(s-ic);
}
void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */
    float arr[n];
    int i,j;
    
    for(i=0;i<n;i++){
        arr[i] = area(tr[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                float tempt = arr[i];
                arr[i] = arr[j];
                arr[j] = tempt;
                triangle temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}
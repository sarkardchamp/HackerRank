#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int andMax = 0,orMax = 0,xorMax = 0, i;
  for(i=1;i<n;i++){
      for(int j = i +1; j<=n; j++){
        if(((i&j)> andMax) && ((i&j)< k))andMax = i&j;
        if(((i|j)>orMax) && ((i|j)< k))orMax = i|j;
        if(((i^j)>xorMax) && ((i^j)<k))xorMax = i^j;
      }
  }
  printf("%d\n%d\n%d",andMax,orMax,xorMax);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and=0,and_max=0,or=0,or_max=0,xor=0,xor_max=0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          and=i&j;
          or=i|j;
          xor=i^j;
      if(and>and_max && and<k)
      {
          and_max=and;
      }
      if(or>or_max && or<k)
      {
          or_max=or;
      }
      if(xor>xor_max && xor<k)
      {
          xor_max=xor;
      }
      }
  }
  printf("%d\n%d\n%d",and_max,or_max,xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

OR

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and_max=0,or_max=0,xor_max=0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
      if((i&j)>and_max && (i&j)<k)
      {
          and_max=(i&j);
      }
      if((i|j)>or_max && (i|j)<k)
      {
          or_max=(i|j);
      }
      if((i^j)>xor_max && (i^j)<k)
      {
          xor_max=(i^j);
      }
      }
  }
  printf("%d\n%d\n%d",and_max,or_max,xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

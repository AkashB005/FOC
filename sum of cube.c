#include <stdio.h>

int main (){
  int n = 10;
  int sum = n*(n+1)/2;
  sum *= sum;
  printf("Sum is: %i\n", sum);
  return 0;
}

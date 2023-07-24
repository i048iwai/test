#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( !(n & 1 == 1) ){
    printf("%d は偶数です\n", n);
  }
  return 0;
}

// n & 1 == 1 のときが奇数でそれ以外が偶数と判定する方が正しいから。

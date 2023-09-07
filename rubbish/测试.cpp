#include <stdio.h>

int main()
{
  int m[3][3] = {{1}, {2}, {3}};
  int n[3][3] = {1, 2, 3};
  printf("%d ", m[1][0] + n[0][0]);
  printf("%d\n", m[0][1] + n[1][0]);
}
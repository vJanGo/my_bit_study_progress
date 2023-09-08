#include<stdio.h>
int main()
{
  int a = 10, b = 5, c = 5, d = 5, i = 0, j = 0, k = 0;
  for (; a > b; ++b) i++;
  while (a > ++c) j++;
  do k++; while (a > d++);
  printf("%d %d %d",i,j,k);
    return 0;
}
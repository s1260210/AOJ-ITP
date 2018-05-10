#include<stdio.h>
int main(void){
  int x, y, z;
  scanf("%d", &x);
  z = x / 3600;
  x = x - z * 3600;
  y = x / 60;
  x = x - y * 60;
  printf("%d:%d:%d\n", z, y, x);
  return 0;
}

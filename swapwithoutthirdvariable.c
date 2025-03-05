#include<stdio.h>
int main(){
  int a, b;
  printf("Enter value of a and b: ");
  scanf("%d%d", &a, &b);
  printf ("a = %d, b = %d\n", a, b);
  a = a - b;
  b = a + b;
  a = b - a;
  printf ("a = %d, b = %d", a, b);
  return 0;
}

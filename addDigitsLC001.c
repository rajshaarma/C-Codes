//38-> 3+8 = 11-> 1+1 = 2(As soon as it's single didgit return it.)
#include<stdio.h>
int addDigits(int num) {
    int fd, ld;
    while(num >= 10){
        fd = num / 10;
        ld = num % 10;
        num = fd + ld;
    }
    return num;
}
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  num = addDigits(num);
  printf("%d", num);
  return 0;
}

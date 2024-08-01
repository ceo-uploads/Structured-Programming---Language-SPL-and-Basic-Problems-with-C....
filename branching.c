#include<stdio.h>
int main() {
  //local variable defination..
  int a = 100;

  //checking boolean condition..
  if (a < 20) {
    //if true..
    printf("a is greater than 20.");
  } else {
    //if false..
    printf("a is not greater than 20.");
  }

  //printing the actual value...
  printf("The value of a is %d", a);

  return 0;
}

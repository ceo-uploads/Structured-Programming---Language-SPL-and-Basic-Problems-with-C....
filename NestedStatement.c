#include<stdio.h>
int main() {
  //instances...
  int i = 1;
  int j = 2;
  int k = 3;

  //checking conditions with nested conditions...

  if (i > j) {
    //if the statement is right..
    if (j > k) {
      //if the second statement is right..
      printf("A");
    } else {
      //if second condition is false..
      printf("C");
    }
  } else {
    //if the first condition is not satisfied..
    printf("B");
  }

  return 0;
}

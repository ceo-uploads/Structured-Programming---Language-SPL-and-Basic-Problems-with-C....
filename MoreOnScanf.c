#include<stdio.h>
int main() {
  int a, b, c;
  //int a, b, c is the instance..
  printf("Enter The Values: \n");
  scanf("%3d %3d %3d", &a, &b, &c);

  /*we will take the input as 3 digits..
  it will seam like,, we have enterd 123456789 as input...
  it will sort each 3 digits from input data..
  as this,, a = 123, b = 456, c = 789*/

  printf("%d, %d, %d", a, b, c);
  //output..
}

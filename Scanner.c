#include<stdio.h>
int main() {
  // here, we have instantiated two data but not their values..
  int num;
  //it is a integer datatype..
  char name;
  //it is a String datatype as a character
  
  //now, we will input this data from user ,,, 
  printf("Enter Your Name: ");
  scanf("%c",&name);

  printf("Enter Your Age: ");
  scanf("%d",&num);

  // if after providing datas,, user allowed to view those data as output..

  printf("Your Entered-\n Name: %c.\n Age: %d.",name, num);
}

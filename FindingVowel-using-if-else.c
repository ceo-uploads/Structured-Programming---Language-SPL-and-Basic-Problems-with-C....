#include<stdio.h>
int main() {
  char word; // character instances..

  //taking input..
  printf("Enter an Alphabet: ");
  scanf("%d",&word);

  // matching the word...
  if (word == a|| word == e|| word == i|| word == o|| word == u|| word == A|| word == E|| word == I|| word == O|| word == U) {
    printf("Vowel");
  } else {
    printf("consonant");
  }

  return 0;
}

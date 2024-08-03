#include<stdio.h>
int main() {
  //instance...
  char alp;

  //taking input using scanf..
  printf("Enter an Alphabet: ");
  scanf("%c",&alp);

  //this code is an example of switch-case branching..
  //we are taking am aplphabet and checking that if it is a vowel or not..
  switch(alp) {
    case 'a':
      printf("Vowel.");
        break;
    case 'e':
      printf("Vowel.");
        break;
    case 'i':
      printf("vowel");
        break;
    case 'o':
      printf("Vowel.");
        break;
    case 'u':
      printf("Vowel.");
        break;
    case 'A':
      printf("Vowel.");
        break;
    case 'E':
      printf("Vowel.");
        break;
    case 'I':
      printf("Vowel.");
        break;
    case 'O':
      printf("Vowel.");
        break;
    case 'U':
      printf("Vowel.");
        break;
    default:
      printf("Consonant.");
    break;
  }

  return 0;
}

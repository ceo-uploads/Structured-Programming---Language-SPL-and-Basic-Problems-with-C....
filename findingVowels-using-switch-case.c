#include<stdio.h>
int main() {
  int word; // instances..

  //taking input
  printf("Enter an Alphabet: ");
  scanf("%c",&word);

  // matching words..
  switch (word) {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    case 'A':
        printf("Vowel");
        break;
    case 'E':
        printf("Vowel");
        break;
    case 'I':
        printf("Vowel");
        break;
    case 'O':
        printf("Vowel");
        break;
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
  }

  return 0;
}

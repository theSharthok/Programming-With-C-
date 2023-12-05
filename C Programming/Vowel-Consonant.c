#include <stdio.h>

int main() {
  char c;

  // Prompt the user to enter a character.
  printf("Enter any letter: ");
  scanf("%c", &c);

  // Check if the character is a vowel.
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    printf("%c is the vowel letter.", c);
  } else {
    printf("%c is the consonant letter.", c);
  }

  return 0;
}

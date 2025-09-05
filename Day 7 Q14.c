#include <stdio.h>
int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z')
  {
    ch = ch + ('a' - 'A');
  }

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  { 
      printf("Vowel\n");
  }

  else if (ch >= 'a' && ch <= 'z')

  {
    printf("Consonant\n");
  }
  else 
  {
    printf("Invalid input\n");
  }

  return 0;

}

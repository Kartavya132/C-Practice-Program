#include <stdio.h>

#define MAX 100 // Maximum size for the string

int main()
{
  char st[MAX];
  int i, len = 0;
  int isPalindrome = 1;

  printf("\n=== Palindrome Checker ===\n");

  // Taking input from user
  printf("Enter a word: ");
  scanf("%s", &st);

  // Calculating lenght
  while (st[len] != '\0')
  {
    len++;
  }

  // Check if the string is a palindrome
  for (i = 0; i < len / 2; i++)
  {
    if (st[i] != st[len - i - 1])
    {
      isPalindrome = 0;
      break;
    }
  }

  // Display result
  if (isPalindrome)
    printf("\nResult: '%s' is a Palindrome \n", st);
  else
    printf("\nResult: '%s' is NOT a Palindrome \n", st);

  return 0;
}

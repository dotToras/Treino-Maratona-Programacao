#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h> 

// Codewars code
char *DuplicateEncoder(const char *string) 
{

  int size = strlen(string), nums[size];
  char *newString = (char *)malloc((size + 1) * sizeof(char));

  for (int i = 0; i < size; i++) 
  {

    int appear = 0;
    
    for (int j = 0; j < size; j++) 
    {
      if (tolower(string[i]) == tolower(string[j])) 
      {
        appear++;
      }
    }
    nums[i] = appear;
  }

  for (int i = 0; i < size; i++)
    {
    if (nums[i] > 1) 
    {
      newString[i] = ')';
    } else 
    {
      newString[i] = '(';
    }
  }

  newString[size] = '\0';

  return newString;
}


// Codewars sample tests
int main(void) 
{
    printf("%s\n", DuplicateEncoder("Prespecialized"));
    printf("%s\n", DuplicateEncoder("   ()(   "));
    printf("%s\n", DuplicateEncoder("Supralapsarian"));
    printf("%s\n", DuplicateEncoder(" ( ( )"));
    printf("%s\n", DuplicateEncoder("walk"));
    printf("%s\n", DuplicateEncoder("Hannah"));
    printf("%s\n", DuplicateEncoder("$$\\"));
    printf("%s\n", DuplicateEncoder("|"));
    printf("%s\n", DuplicateEncoder(""));

    return 0;
}
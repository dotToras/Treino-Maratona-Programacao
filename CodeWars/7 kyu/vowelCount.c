#include <stddef.h>
#include <string.h>
#include <stdio.h>

// Code Wars Solution
size_t get_count(const char *s)
{

  int countVowels = 0;
  int sizeString = strlen(s);

  for(int i = 0; i < sizeString; i++ )
    {
      switch(s[i])
        {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
            countVowels++;
            break;
          default:
            break;
        } 
    }
  return countVowels;
}

// Sample Tests
int main()
{
  printf("%zu \n", get_count("abracadabra"));
  printf("%zu \n", get_count(""));
  
  return 0;
}
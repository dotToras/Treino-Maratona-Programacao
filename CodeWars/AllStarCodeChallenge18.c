#include <stddef.h>
#include <stdio.h>
#include <string.h>

const char *str;
char letter;

// Codewars code
size_t str_count(const char *str, char letter) {

  int countRepeat = 0, sizeStr = strlen(str);

  for(int i = 0; i < sizeStr;i++)
    {
      if(str[i] == letter)
        {
            countRepeat++;
        }
    }

  return countRepeat;
}


// Only to test
int main()
{
  // Sample CodeWars Tests
   printf("%zu\n", str_count("Hello", 'o'));
   printf("%zu\n", str_count("Hello", 'l'));
   printf("%zu\n", str_count("", 'z'));
}
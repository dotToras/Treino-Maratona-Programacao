#include <stdio.h>

//CodeWars Code
int ascii_code (char ch)
{
  return (int)ch;
}

//Tests
int main(void) 
{
  // Sample Tests
  printf("%d\n",ascii_code('G'));
  printf("%d\n",ascii_code('a'));
  printf("%d\n",ascii_code('Z'));
  printf("%d\n",ascii_code('b'));

  return 0;
}
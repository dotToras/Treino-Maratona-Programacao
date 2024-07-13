#include <stdio.h>

// Code Wars Solution
int solution(int number) 
{
  int sum = 0;

  if (number < 0) 
  {
    return 0;
  } 
  else 
  {
    for (int i = 0; i < number; i++) 
    {
      if (i % 3 == 0 || i % 5 == 0) 
      {
        sum += i;
      }
    }
  }
  return sum;
}

// Sample Tests
int main()
{

  printf("%d\n", solution(3)); // Expected 0
  printf("%d\n", solution(4)); // Expected 3
  printf("%d\n", solution(5)); // Expected 3
  printf("%d\n", solution(6)); // Expected 8
  printf("%d\n", solution(7)); // Expected 14
  printf("%d\n", solution(10)); // Expected 23
  printf("%d\n", solution(20)); // Expected 78

  return 0;
}
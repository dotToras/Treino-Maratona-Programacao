#include <stdio.h>
#include <stddef.h>

//CodeWars Code
int grow(size_t size, const int arr[size]) {

  int mpy = 1;

  for(int i = 0; i < size; i++)
    {
      mpy *= arr[i];
    }

  return mpy; 
}


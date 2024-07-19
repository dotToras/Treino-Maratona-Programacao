#include <stdio.h>
#include <stddef.h>

// CodeWars Code
size_t countBits(unsigned value)
{
  int count = 0;
  while(value > 0) 
    {
      int temp = 0; // variavel que armazenará o valor temporário
      temp = value % 2; // o valor temporário se torna o resto do valor recebido por 2
      value /=  2; // o valor então pega o quociente, para que seja calculado novamente

      if(temp == 1)
        {
          count++;
        }
    }
  return count;
}

// Only for tests
int main(void) {

  // Sample Tests
  printf("%zu\n", countBits(0));
  printf("%zu\n", countBits(4));
  printf("%zu\n", countBits(7));
  printf("%zu\n", countBits(9));
  printf("%zu\n", countBits(10));
  
  return 0;
}


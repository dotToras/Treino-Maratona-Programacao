#include <stdbool.h>
#include <math.h> 
#include <stdio.h>

bool narcissistic(int num);

int main(void) 
{
  int num;
  
  scanf("%d", &num);
  printf("%d ",narcissistic(num));
  
  return 0;
}

bool narcissistic(int num)
{

  int sum = 0, originalNumber = num;
  int size = (int)log10(num) + 1; // Descobre o número de dígitos

  while(num > 0)
    {

     //Eleva o dígito ao número de dígitos e soma, num % 10 retorna o último dígito de um número
      sum += pow(num % 10,  size);
      num /= 10; // Avança, para o próximo digito

    }

  if(sum == originalNumber) 
      return true;

  else
      return false;

}

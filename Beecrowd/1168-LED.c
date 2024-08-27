#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{

  int n1, numLed = 0, size;
  char number[101];
  
  scanf("%d", &n1);
 
  for (int i = 0; i < n1; i++) 
  {
    // Reseta a contagem dos leds para cada entrada
    numLed = 0;
    
    scanf("%s", &number);
    // Pega o tamanho da string
    size = strlen(number);

    //loop interno para computar char por char quantos leds são necessários
    for(int j = 0; j < size ; j++)
      {
        
        if (number[j] == '1') numLed += 2;
        else if (number[j] == '0' || number[j] == '6' || number[j] == '9')  numLed += 6;
        else if (number[j] == '2' || number[j] == '3' || number[j] == '5') numLed += 5;
        else if (number[j] == '4') numLed += 4;
        else if (number[j] == '7') numLed += 3;
        else if (number[j] == '8') numLed += 7;
        
      }

    printf("%d leds\n", numLed);
    
  }


return 0;
  
}
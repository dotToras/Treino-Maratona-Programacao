#include <stdio.h>

int main() 
{

      int segundos, minutos, horas;

      scanf("%d", &segundos);
     // transformar de segundos para minutos
      minutos = segundos / 60;
      // de minutos para horas
      horas = minutos / 60;
      // pegar o restante de minutos que sobram em 1 hora
      minutos = minutos % 60 ;
      // pegar o restante de segundos em 1 minuto
      segundos = segundos % 60;

      printf("%d:%d:%d\n", horas, minutos, segundos);       

      return 0;
}
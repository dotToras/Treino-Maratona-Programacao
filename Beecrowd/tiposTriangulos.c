#include <stdio.h>

int main(void) 
{

  double a, b, c, maior, menor;

  scanf("%lf %lf %lf", &a, &b, &c);

  double num[3] = {a, b, c};

  for (int i = 0; i < 3; i++) {
    
    for (int j = i + 1; j < 3; j++) 
    {
      if (num[i] > num[j]) {
        double temp = num[i];
        num[i] = num[j];
        num[j] = temp;
      }
    }
  }

  a = num[2];
  b = num[1];
  c = num[0];

  if (a >= b + c)
  {
    printf("NAO FORMA TRIANGULO\n");
  } else
  {
    if (a * a == (b * b) + (c * c)) 
    {
      printf("TRIANGULO RETANGULO\n");
    } else if (a * a > (b * b) + (c * c)) 
    {
      printf("TRIANGULO OBTUSANGULO\n");
    } else if (a * a < (b * b) + (c * c)) 
    {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || b == c || c == a) 
    {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  
  return 0;
}
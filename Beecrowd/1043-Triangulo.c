#include <stdio.h>

int main() {

   double a, b, c, area, perimetro;

   scanf("%lf %lf %lf", &a, &b, &c);

    // Se a soma das medidas de quaisquer dois lados for sempre maior que a medida do terceiro lado. Dá pra formar
   if((b+c) > a && (a+c) > b && (a+b) > c)
   {
       perimetro = a + b + c;
       printf("Perimetro = %.1lf\n", perimetro);
   }
   else // Senão
   {
       area = ((a + b) * c) / 2;
       printf("Area = %.1lf\n", area);
   }
    return 0;
}
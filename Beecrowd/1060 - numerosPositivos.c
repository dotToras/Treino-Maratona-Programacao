#include <stdio.h>

int main() {

   double nm, nmPositivos = 0;
  
   for(int i=0;i<6;i++)
   {
     scanf("%lf", &nm);
     if(nm > 0)
     {
        nmPositivos++;
     }
   }

   printf("%.0lf valores positivos\n", nmPositivos);
  
   return 0;
}
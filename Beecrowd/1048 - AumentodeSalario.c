#include <stdio.h>

int main() {

    double salario, reajuste = 0, percentual;

    scanf("%lf", &salario);

    if(salario > 0 && salario <= 400.00)
    {
        percentual = 0.15;
        reajuste = salario * percentual;
        salario += reajuste;
    }
    else if(salario > 400.00 && salario <= 800.00)
    {
        percentual = 0.12;
        reajuste = salario * percentual;
        salario += reajuste;
    }
    else if(salario > 800.00 && salario <= 1200.00)
    {
        percentual = 0.10;
        reajuste = salario * percentual;
        salario += reajuste;
    }
    else if(salario > 1200.00 && salario <= 2000.00)
    {
        percentual = 0.07;
        reajuste = salario * percentual;
        salario += reajuste;
    }
    else if(salario > 2000.00)
    {
        percentual = 0.04;
        reajuste = salario * percentual;
        salario += reajuste;
    }

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", salario, reajuste, percentual * 100 );

    return 0;
}

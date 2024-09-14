#include <stdio.h>

int main() 
{

     int diasPeriodo, saldo, i, movimentoSaldo, menorValor = 0;

    scanf("%d %d", &diasPeriodo, &saldo);

    // menor valor registrado no início da operação
    menorValor = saldo;
    
    for(i = 0; i < diasPeriodo; i++)
        {
            scanf("%d", &movimentoSaldo);

            // saldo atualiza com a nova movimentação
             saldo += movimentoSaldo;

            // Se o saldo atualizado for maior que o valor temporario
            if(saldo < menorValor)
            {
                // menor valor é o saldo atualizado
                menorValor = saldo;
            } 
        }

    printf("%d\n", menorValor);

    return 0;
}
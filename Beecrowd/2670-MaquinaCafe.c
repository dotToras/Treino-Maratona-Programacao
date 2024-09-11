#include <stdio.h>

int bestPath(int peopleFloor1, int peopleFloor2, int peopleFloor3);

int main() 
{
    int peopleFloor1, peopleFloor2, peopleFloor3;

    scanf("%d %d %d", &peopleFloor1, &peopleFloor2, &peopleFloor3);

    printf("%d\n", bestPath(peopleFloor1, peopleFloor2, peopleFloor3));

    return 0;
}

int bestPath(int peopleFloor1, int peopleFloor2, int peopleFloor3) {
    int timefloor1, timefloor2, timefloor3, bestPath;

    // O tempo gasto para começar no andar 1 é calculado somando:
    // o número de pessoas no andar 2 vezes 2 (ida e volta entre 1 e 2) 
    // + o número de pessoas no andar 3 vezes 4 (ida e volta entre 1 e 3).
    timefloor1 = (peopleFloor2 * 2) + (peopleFloor3 * 4);

    // O tempo gasto para começar no andar 2 é calculado somando:
    // o número de pessoas no andar 1 vezes 2 (ida e volta entre 2 e 1) 
    // + o número de pessoas no andar 3 vezes 2 (ida e volta entre 2 e 3).
    timefloor2 = (peopleFloor1 * 2) + (peopleFloor3 * 2);

    // O tempo gasto para começar no andar 3 é calculado somando:
    // o número de pessoas no andar 2 vezes 2 (ida e volta entre 3 e 2) 
    // + o número de pessoas no andar 1 vezes 4 (ida e volta entre 3 e 1).
    timefloor3 = (peopleFloor1 * 4) + (peopleFloor2 * 2);

    // Verifica qual andar tem o menor tempo e define o melhor caminho.
    if (timefloor1 <= timefloor2 && timefloor1 <= timefloor3) 
        bestPath = timefloor1;  // Prioriza o tempo do andar 1 se for o menor.
    else if (timefloor2 <= timefloor1 && timefloor2 <= timefloor3)
        bestPath = timefloor2;  // Prioriza o tempo do andar 2 se for o menor.
    else 
        bestPath = timefloor3;  // Caso contrário, o andar 3 é o menor.
    

    return bestPath;
}

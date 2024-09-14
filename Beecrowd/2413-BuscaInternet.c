#include <stdio.h>

int main() 
{

    int terceiroLink, segundoLink, primeiroLink;

    scanf("%d", &terceiroLink);

    segundoLink = terceiroLink * 2;
    primeiroLink = segundoLink * 2;
    // ou só primeiro link = terceiro * 4

    printf("%d\n", primeiroLink);

    return 0;
}
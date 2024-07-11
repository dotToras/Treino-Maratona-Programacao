#include <stdio.h>

int main() {

    int nm, nmPares = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &nm);

        if(nm%2 == 0)
        {
            nmPares++;
        }
    }

    printf("%d valores pares\n", nmPares);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int nombre_1 = 30;
    int nombre_2 = 34;
    int nombre_3 = 62;

    float moyenne = (nombre_1 + nombre_2 + nombre_3) / 3.0;

    printf("La moyenne de %d, %d et %d est : %.2f\n", nombre_1, nombre_2, nombre_3, moyenne);

    return 0;
}

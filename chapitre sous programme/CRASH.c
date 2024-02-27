#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_POINTS 1000000

double random_double() {
    return (double)rand() / RAND_MAX;
}

int main() {
    srand(time(NULL));

    int points_inside_circle = 0;
    for (int i = 0; i < TOTAL_POINTS; ++i) {
        double x = random_double() * 2 - 1; // Valeur aléatoire entre -1 et 1
        double y = random_double() * 2 - 1; // Valeur aléatoire entre -1 et 1

        // Si le point est dans le cercle unité, incrémente le compteur
        if (x * x + y * y <= 1) {
            points_inside_circle++;
        }
    }

    // Pi est approximé par (points à l'intérieur du cercle / total des points) * 4
    double pi_estimate = (double)points_inside_circle / TOTAL_POINTS * 4;

    printf("Approximation de Pi : %f\n", pi_estimate);

    return 0;
}

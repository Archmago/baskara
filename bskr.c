#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

    int a = strtol(argv[1], NULL, 10);
    int b = strtol(argv[2], NULL, 10);
    int c = strtol(argv[3], NULL, 10);

    int delta = (pow(b, 2)) + (-4 * a * c);

    float result1 = (-b + sqrt(delta)) / (2 * a);
    float result2 = (-b - sqrt(delta)) / (2 * a);

    if(delta >= 0) {
        printf("A: %i\nB: %i\nC: %i\n\nΔ: %i\n\nResultado¹: %.2f\nResultado²: %.2f\n", a, b ,c, delta ,result1, result2);
    } else {
        printf("A: %i\nB: %i\nC: %i\n\nΔ: %i\n\nSem resultados possiveis, delta negativo!\n", a, b ,c, delta);
    }

    return EXIT_SUCCESS;

}

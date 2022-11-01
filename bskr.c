#include <stdlib.h>
#include <stdio.h>
#include <math.h>

# Teste

int main(int argc, char *argv[]) {

    int a = strtol(argv[1], NULL, 10);
    int b = strtol(argv[2], NULL, 10);
    int c = strtol(argv[3], NULL, 10);

    int delta = (pow(b, 2)) + (-4 * a * c);

    float result1 = (-b + sqrt(delta)) / (2 * a);
    float result2 = (-b - sqrt(delta)) / (2 * a);

    if(delta >= 0) {
        printf("\nA: \u001b[32m%i\u001b[0m\nB: \u001b[32m%i\u001b[0m\nC: \u001b[32m%i\u001b[0m\n\nΔ: \u001b[32m%i\u001b[0m\n\nResultado¹: \u001b[31m%.2f\u001b[0m\nResultado²: \u001b[31m%.2f\u001b[0m\n\n", a, b ,c, delta ,result1, result2);
    } else {
        printf("\nA: \u001b[32m%i\u001b[0m\nB: \u001b[32m%i\u001b[0m\nC: \u001b[32m%i\u001b[0m\n\nΔ: \u001b[32m%i\u001b[0m\n\n\u001b[31mSem resultados possiveis, delta negativo!\u001b[0m\n\n", a, b ,c, delta);
    }

    return EXIT_SUCCESS;

}

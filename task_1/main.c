#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char** argv) {
    if (argc != 4) {
        printf("[error]: Insufficient amount of arguments...\n\n");
        return 1;
    }

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);

    if (a == 0) {
        printf("[error]: Not a quadratic equation...\n\n");
        return 1;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("[result]: x1 = %.2f, x2 = %.2f\n\n", x1, x2);
    } 
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        printf("[result]: x = %.2f\n\n", x);
    } 
    else {
        double real = -b / (2 * a);
        double imaginary = sqrt(-discriminant) / (2 * a);

        printf(
            "[result]: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n\n", 
            real, 
            imaginary, 
            real, 
            imaginary
        );
    }

    return 0;
}
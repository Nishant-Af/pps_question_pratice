#include <stdio.h>
#include <math.h> // Required for sqrt() function

 // Write a C program to find roots of a quadratic equation.


int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Prompt user for coefficients
    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check if the equation is linear rather than quadratic
    if (a == 0) {
        if (b == 0) {
            printf("Invalid equation (no solution if c != 0).\n");
        } else {
            root1 = -c / b;
            printf("Linear equation detected. Root = %.2lf\n", root1);
        }
        return 0;
    }

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Case 1: Roots are real and different
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    // Case 2: Roots are real and equal
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    // Case 3: Roots are complex (imaginary)
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}

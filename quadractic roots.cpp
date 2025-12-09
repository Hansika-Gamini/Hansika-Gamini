#include <stdio.h> 
#include <math.h> 
int main() { 
    float a, b, c, d, root1, root2; 
    printf("Enter coefficients a, b and c: "); 
    scanf("%f %f %f", &a, &b, &c); 
    d = b*b - 4*a*c;  // Discriminant 
    if (d > 0) { 
        root1 = (-b + sqrt(d)) / (2 * a); 
        root2 = (-b - sqrt(d)) / (2 * a); 
        printf("Roots are real and distinct.\n"); 
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2); 
    } 
    else if (d == 0) { 
        root1 = root2 = -b / (2 * a); 
        printf("Roots are real and equal.\n"); 
        printf("Root1 = Root2 = %.2f\n", root1); 
    } 
    else { 
        float real = -b / (2 * a); 
        float imag = sqrt(-d) / (2 * a); 
        printf("Roots are complex and imaginary.\n"); 
        printf("Root1 = %.2f + %.2fi\n", real, imag); 
        printf("Root2 = %.2f - %.2fi\n", real, imag); 
    } 
    return 0; 
} 


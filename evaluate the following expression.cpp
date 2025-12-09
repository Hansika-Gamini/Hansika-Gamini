#include <stdio.h> 
int main() { 
    int a, b, c, d; 
    int i, j; 
    float result; 
    printf("Enter values for a, b, c, d: "); 
    scanf("%d %d %d %d", &a, &b, &c, &d); 
    printf("Enter value for i: "); 
    scanf("%d", &i); 
    result = (float)a / b * c - b + (float)a * d / 3; 
    j = (i++) + (++i); 
          printf("\nResult of a/b*c - b + a*d/3 = %.2f\n", result); 
    printf("Value of j = (i++) + (++i) is: %d\n", j); 
    return 0; 
} 


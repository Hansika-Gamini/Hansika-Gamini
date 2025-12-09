#include <stdio.h> 
int main() { 
    float speed, time, distance; 
    printf("Enter speed of the object: "); 
    scanf("%f", &speed); 
    printf("Enter time travelled: "); 
    scanf("%f", &time); 
    distance = speed * time; 
    printf("Distance travelled = %.2f units\n", distance); 
    return 0; 
}     

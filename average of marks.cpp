#include <stdio.h> 
int main() { 
    int marks[5], total = 0, i; 
    float average; 
    printf("Enter marks of 5 subjects: "); 
    for (i = 0; i < 5; i++) { 
        scanf("%d", &marks[i]); 
        total += marks[i]; 
    } 
    average = total / 5.0; // Use 5.0 to get float division 
    printf("Total Marks = %d\n", total); 
    printf("Average Marks = %.2f\n", average); 
    return 0;
    
}

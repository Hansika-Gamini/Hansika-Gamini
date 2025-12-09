#include <stdio.h> 
#include <string.h> 
int main() { 
    FILE *fp; 
    char writeText[100], readText[100]; 
 printf("Enter text to write into the binary file: "); 
    fgets(writeText, sizeof(writeText), stdin); 
  // Write to binary file 
    fp = fopen("data.bin", "wb"); 
    if (fp == NULL) { 
        printf("Error opening file!\n"); 
        return 1; 
    } 
  fwrite(writeText, sizeof(char), strlen(writeText) + 1, fp); 
    fclose(fp); 
 // Read from binary file 
    fp = fopen("data.bin", "rb"); 
    if (fp == NULL) { 
        printf("Error opening file!\n"); 
        return 1; 
    } 
 fread(readText, sizeof(char), sizeof(readText), fp); 
    fclose(fp); 
 printf("\nReading from binary file:\n"); 
printf("%s", readText); 
 return 0; 
} 


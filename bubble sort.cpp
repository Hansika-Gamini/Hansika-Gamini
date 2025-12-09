#include <stdio.h>
int main() {
int arr[6] = {50, 20, 10, 40, 30, 60};
int n = 6;
int temp;
printf("Original Array:\n");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
// BubbleSort
for (int i = 0; i < n-1; i++) {
for (int j = 0; j < n-i-1; j++) {
if (arr[j] > arr[j + 1]) {
// swap
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
printf("\n\nSorted Array (Ascending Order):\n");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}


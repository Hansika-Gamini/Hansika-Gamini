#include <stdio.h>
int main() {
int arr[10] = {10, 20, 10, 30, 20, 40, 30};
int n = 7;
printf("Original Array:\n");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
// Removing duplicates
for (int i = 0; i < n; i++) {
for (int j = i + 1; j< n; j++) {
if (arr[i] == arr[j]) {
// Shift elements left to remove duplicate
for (int k = j; k < n- 1; k++) {
arr[k] = arr[k + 1];
}
n--; // reduce array size
j--;
}
}
}
// check same indexagain
printf("\n\nArray after removing duplicates:\n");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}


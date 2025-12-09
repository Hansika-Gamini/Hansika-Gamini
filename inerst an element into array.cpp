#include <stdio.h>
int main() {
int arr[10] = {10, 20, 30, 40, 50}; //initial array
int n = 5;
int pos, value;
// current number of elements
printf("Enter the position to insert (0 to %d): ", n);
scanf("%d", &pos);
printf("Enter the value to insert: ");
scanf("%d", &value);
// shift elementsto the right
for (int i = n; i > pos; i--) {
arr[i] = arr[i- 1];
}
// insert the value
arr[pos] = value;
n++; //increase size
printf("\nArray after insertion:\n");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}


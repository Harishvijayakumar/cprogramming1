#include <stdio.h>

int main() {
int n, i;
int arr[100];
int *p;


printf("Enter the number of elements: ");
scanf("%d", &n);

printf("Enter %d elements: ", n);
for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

p = arr;
printf("Elements in the array: ");
for (i = 0; i < n; i++) {
    printf("%d ", *(p + i));
}

return 0;
}

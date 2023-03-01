#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int arr[100];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("Sum of elements: %d\n", sum);

    return 0;
}

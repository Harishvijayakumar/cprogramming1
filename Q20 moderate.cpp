#include <stdio.h>

int isPerfect(int n) {
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n);
}

int main() {
    int low, high, i;

    printf("Enter the range (low high): ");
    scanf("%d%d", &low, &high);

    printf("Perfect numbers in the given range are: ");
    for (i = low; i <= high; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

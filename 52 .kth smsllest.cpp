#include <stdio.h>
int main() {
  int n, k, i;
  int arr[100];
  int temp;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the kth smallest element you want to find: ");
  scanf("%d", &k);
  printf("Enter the elements of the array: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("The %dth smallest element in the array is %d\n", k, arr[k - 1]);
  return 0;
}

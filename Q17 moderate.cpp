#include <stdio.h>

int factorial(int *num) {
int result = 1;
for (int i = 1; i <= *num; i++) {
result = result * i;
}
return result;
}

int main() {
int num;
int *p;



printf("Enter a number: ");
scanf("%d", &num);
p = &num;

printf("Factorial of %d: %d\n", num, factorial(p));

return 0;
}

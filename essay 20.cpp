#include <stdio.h>

int main() {
int marks[4];
int total = 0;
int i;
float aggregate;


printf("Enter marks of 4 subjects: \n");
for (i = 0; i < 4; i++) {
    scanf("%d", &marks[i]);
    total += marks[i];
}
aggregate = total / 4.0;
printf("Aggregate: %.2f\n", aggregate);

if (aggregate >= 75) {
    printf("Grade: Distinction\n");
} else if (aggregate >= 60 && aggregate < 75) {
    printf("Grade: First Division\n");
} else if (aggregate >= 50 && aggregate < 60) {
    printf("Grade: Second Division\n");
} else if (aggregate >= 40 && aggregate < 50) {
    printf("Grade: Third Division\n");
} else {
    printf("Grade: Fail\n");
}

return 0;
}



#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int N;
    printf("Enter a non-negative integer: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Invalid input. N should be a non-negative integer.\n");
    } else {
        int result = factorial(N);
        printf("Factorial of %d is %d\n", N, result);
    }
    return 0;
}

#include <stdio.h>
int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Invalid input. N should be a positive integer.\n");
    } else {
        int result = fibonacci(N);
        printf("Fibonacci of %d is %d\n", N, result);
    }
    return 0;}

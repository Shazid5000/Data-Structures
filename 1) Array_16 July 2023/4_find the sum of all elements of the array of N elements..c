#include <stdio.h>
int main() {
    int N, i;
    float sum = 0;
printf("Enter no. of elements: ");
    scanf("%d", &N);
    float array[N];
printf("Enter the elements:\n");
    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &array[i]);
        sum += array[i];    }
printf("\nSum of %d elements is %.2f\n", N, sum);
    return 0;}

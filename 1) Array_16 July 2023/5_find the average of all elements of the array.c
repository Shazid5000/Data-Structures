#include <stdio.h>
int main() {
    int N, i;
    float sum = 0;
    float average;
printf("Enter no. of elements: ");
    scanf("%d", &N);
    float array[N];
printf("Enter the elements:\n");
    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &array[i]);
        sum += array[i];    }
    average = sum / N;
printf("\nAverage of %d elements is %.2f\n", N, average);
    return 0;}

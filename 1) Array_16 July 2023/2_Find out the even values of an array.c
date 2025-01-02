#include <stdio.h>
int main() {
    int N, i;
printf("Enter no. of elements: ");
    scanf("%d", &N);
    int array[N];
printf("Enter the elements:\n");
    for (i = 1; i <= N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &array[i]);    }
printf("\nEven values in the array:\n");
    for (i = 1; i <= N; i++) {
        if (array[i] % 2 == 0) {
            printf("%d\n", array[i]);    }}
    return 0;}

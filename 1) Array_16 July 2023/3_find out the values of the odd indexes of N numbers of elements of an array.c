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
printf("\nValues at odd indexes:\n");
    for (i = 1; i <= N; i = i+2) {
printf("%d:%d\n", i  ,array[i]);   }
    return 0;}

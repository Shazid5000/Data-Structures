#include <stdio.h>
int main() {
    int N1, N2, i, j, k;
printf("Enter no. of elements of A: ");
    scanf("%d", &N1);
    int A[N1];
printf("Enter the elements of A:\n");
    for (i = 0; i < N1; i++) {
    scanf("%d", &A[i]);  }
printf("\nEnter no. of elements of B: ");
    scanf("%d", &N2);
    int B[N2];
printf("Enter the elements of B:\n");
    for (i = 0; i < N2; i++) {
        scanf("%d", &B[i]);  }
printf("\nIntersection: ");
    for (i = 0; i < N1; i++) {
    for (j = 0; j < N2; j++) {
        if (A[i] == B[j]) {
printf("%d ", A[i]);
    break;      } } }
printf("\n");
    return 0;}

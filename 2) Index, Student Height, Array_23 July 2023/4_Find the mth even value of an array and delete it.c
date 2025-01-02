#include <stdio.h>
void main() {
  int i, n, element, j, b = 1;
  int array[100];
printf("Enter the number of elements for array:\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
printf("Enter the element for %dth index:\n", i);
    scanf("%d", &array[i]); }
  for (i = 1; i <= n; i++) {
    if (array[i] % 2 == 0) {
    if (b == 2) {
  for (j = i; j < n; j++) {
   array[j] = array[j + 1]; }
 n--; } else { b++; }}}
for (i = 1; i <= n; i++) {
printf("A[%d]=%d\n", i, array[i]); }}

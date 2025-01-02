#include <stdio.h>
int binarySearch(int array[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == target)
          return mid;
        else if (array[mid] < target)
          low = mid + 1;
        else
          high = mid - 1;}
    return -1;}// If the target is not found, return -1
int main() { int n;
    printf("No. of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);  }
// Sorting the array in ascending order (if it's not already sorted)
 for (int i = 0; i < n - 1; i++) { // Fixed the loop termination condition
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp; }}}
    int target;
    printf("Find the element: ");
    scanf("%d", &target);
    int result = binarySearch(array, 0, n - 1, target);
    if (result != -1)
        printf("The %d book is in index %d\n", target, result);
    else
        printf("Element not found in the array.\n");
    return 0;}

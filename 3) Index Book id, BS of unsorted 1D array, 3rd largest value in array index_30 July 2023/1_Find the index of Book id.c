#include <stdio.h>
int binarySearch(int arr[], int n, int target)
{   int left = 1; // Start from index 1
    int right = n;
    while (left <= right)
{       int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;  }
    return -1; }
int main()
{   int n, target;
printf("No. of book IDs: ");
    scanf("%d", &n);
    int bookIDs[n + 1]; // Increase the array size by 1
printf("Book IDs: ");
    for (int i = 1; i <= n; i++)
        scanf("%d", &bookIDs[i]);
printf("Find the index of Book ID: ");
    scanf("%d", &target);
    int index = binarySearch(bookIDs, n, target);
    if (index != -1)
        printf("The %d book is in %d index.\n", target, index);
    else
        printf("The %d book is not found.\n", target);
    return 0;}

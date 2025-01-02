#include <stdio.h>
void main()
{   int i, j, num;
    float array[100];
printf("Enter the number of elements for the array:\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {   printf("Enter the element for index %d:\n", i + 1);
        scanf("%f", &array[i]);
    }
    for (i = 0; i < num - 1; i++)
   {for (j = 0; j < num - i - 1; j++)
  {if (array[j] > array[j + 1])
  {float temp = array[j];
      array[j] = array[j + 1];
      array[j + 1] = temp; } } }
    printf("Output: Sorted Array is:\n");
    for (i = 0; i < num; i++)
{printf("A[%d] = %.1f\n", i + 1, array[i]); }}

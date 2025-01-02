#include<stdio.h>
void main()
{   int n,i,num;
printf("Enter number of elements in the array :");
    scanf("%d",&n);
    int arr[n+1];
    for (int i = 1; i <= n; i++)
   {scanf("%d", &arr[i]);}
    int firstLargest = 0;
    int secondLargest = 0;
    int thirdLargest = 0;
    int firstLargestindex = 0;
    int secondLargestindex = 0;
    int thirdLargestindex = 0;
    for (int i = 1; i <= n; i++)
  {if (arr[i] > firstLargest)
  {         thirdLargest = secondLargest;
            secondLargest = firstLargest;
            firstLargest = arr[i];
            thirdLargestindex = secondLargestindex;
            secondLargestindex = firstLargestindex;
            firstLargestindex = i;   }
        else if (arr[i] > secondLargest)
        {   thirdLargest = secondLargest;
            secondLargest = arr[i];
            thirdLargestindex = secondLargestindex;
            secondLargestindex = i;    }
        else if (arr[i] > thirdLargest)
        {   thirdLargest = arr[i];
            thirdLargestindex = i;   } }
    printf("Enter the data you want to insert: ");
    scanf("%d", &num);
    for ( i = n; i >=thirdLargestindex; i--)
    { arr[i+1]=arr[i]; }  n++;
    arr[thirdLargestindex] = num;
    printf("Output\n");
    for ( i = 1; i <=n; i++)
   {printf("%d ", arr[i]);  }}

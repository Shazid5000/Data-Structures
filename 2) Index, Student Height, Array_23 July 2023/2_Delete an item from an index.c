#include<stdio.h>
void main(){
    int index, i, size;
printf("Enter number of elements: ");
    scanf("%d",&size);
    int a[size+1];
    for ( i = 1; i <=size; i++)
{printf("Enter the %d element :",i);
    scanf("%d",&a[i]);    }
printf("Enter the index you want to delete :");
    scanf("%d",&index);
    if (index<size)
{   for ( i = index; i <= size; i++)
    {a[i]=a[i+1]; }
    size--;
    for ( i = 1; i <= size; i++)
{printf("A[%d]=%d\n",i,a[i]); }}}

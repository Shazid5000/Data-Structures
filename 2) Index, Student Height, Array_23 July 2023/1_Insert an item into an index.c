#include<stdio.h>
void main(){
int i, num,pos,size;
printf("Enter number of elements :");
    scanf("%d", &size);
    int array[size+1];
    for(i=1; i<=size; i++)
{printf("Enter the %d element:\n",i);
    scanf("%d",&array[i]);}
printf("Enter the number you want to insert in the array");
    scanf("%d", &num);
printf("Enter the position of the element");
    scanf("%d", &pos);
    for(i=size; i>=pos; i--){
    array[i+1]=array[i];}
    array[pos]=num;
    size++;
    for(i=1; i<=size; i++){
printf("A[%d]=%d\n",i,array[i]);}}

#include <stdio.h>
int stack[4];
int Maxstk=4;
int Top=0;
int push(int value)
{if(value==Maxstk)
{printf("Overflow"); }
else{Top++;
     stack[Top]=value;
     return value; }}
int pop(int value)
{if (Top==0){
printf ("Underflow");    }
else{value=stack[Top];
     Top--;
     return value; }}
void main()
{   printf("%d pushed into stack\n",push(10));
    printf("%d pushed into stack\n",push(20));
    printf("%d pushed into stack\n",push(30));
    printf("%d popped from stack\n",pop (30));
    printf("Top element is %d\n",stack[Top]);
    printf("Element present in stack:");
    for(int i= Top; i>0; i--){
        printf("%d ",stack[i]);  }}

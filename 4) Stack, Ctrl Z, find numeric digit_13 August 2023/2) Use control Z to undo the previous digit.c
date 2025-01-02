#include<stdio.h>
int MAXSTK=16;
int stack[16];
int top=0;
int push(int item)
{   if(top==MAXSTK)
{    printf("The stack is already filled");
    return 0;}
else{top=top+1;
stack[top]=item;
printf("Enter:%d\n",item);}}
int pop(int item)
{   if(top==-1){
        printf("Stack is empty");
    return 0;   }
    else
{   top=top-1;
    printf("Control Z\n",item);}}
int main()
{   int p,XY;
    printf("Enter the last two digit of your id XY=");
    scanf("%d",&XY);
    push(0);
    push(6);
    push(9);
    push(9);
    pop(9);
    push(22);
    push(300);
    push(0);
    push(0);
    pop(0);
    push(51);
    push(0);
    push(2);
    pop(2);
    push(10);
    push(512);
    pop(512);
    push(XY);
    for(p=1;p<=top;p++)
        printf("%d",stack[p]);}

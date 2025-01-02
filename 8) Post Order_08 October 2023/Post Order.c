#include<stdio.h>
int n=15;
char T[]={'\0','D','B','F','A','C','E','G','\0','\0','\0','\0','\0','\0','H'};
int lc(int i)
{
    if (T[i]!='\0' && (2*i)<=n)
        return (2*i);
    return -1;
}

int rc(int i)
{
    if (T[i]!='\0' && ((2*i)+1)<=n)
        return (2*i)+1;
    return -1;
}

void postorder (int i)
{
    if (i>0 && T[i]!='\0')
    {postorder(lc(i));
    postorder(rc(i));
    printf("%c", T[i]);}
}

int main()
{
    int a ;
    printf("please enter the root index :\n");
    scanf("%d",&a);
    postorder(a);

    return 0;
}

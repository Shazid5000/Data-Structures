//This program will show adjacency matrix
#include<stdio.h>
main()
{
int i,j,p,q,n,e;
printf ("Enter the number of vertex : ");
scanf("%d",&n);
printf ("Enter the number of edge : ");
scanf("%d",&e);
int a[n+1][n+1];
for(i=1; i<=n; i++)
{
for(j=1; j<=n; j++)
{
a[i][j]=0;
}
}
for(i=1; i<=n; i++)
{
//printf("%d:",i);
for (j=1; j<=n; j++)
{
printf ("%d ",a[i][j]);
}
printf("\n");
}
printf("Enter the edges:\n");
for(int k=1; k<=e; k++)
{
scanf("%d %d",&p,&q);
a[p][q]=1;
//a[q][p]=1;
}
for(i=1; i<=n; i++)
{
//printf("%d:",i);
for (j=1; j<=n; j++)
{
printf ("%d ",a[i][j]);
}
printf("\n");
}
return 0;
}

#include<stdio.h>
int main()
{
    int i,j,a[100],b[100],c[100][100]={0},al=0,bo=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        al++;
        if(a[i]<b[i])
        bo++;
    }
    printf("%d %d",al,bo);
}

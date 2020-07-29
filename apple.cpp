#include<stdio.h>
int main()
{
    unsigned long int s,t,a,b,m,n;
    scanf("%lu %lu",&s,&t);
    scanf("%lu %lu",&a,&b);
    scanf("%lu %lu",&m,&n);
    unsigned long int app[m],ora[n];
    for(int i=0;i<m;i++)
    {
        scanf("%lu",&app[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lu",&ora[i]);
    }
    int capp=0,cora=0;
    for(int i=0;i<m;i++)
    {
        if(app[i]+a>=s && app[i]+a<=t)
        capp++;
    }
    for(int i=0;i<n;i++)
    {
        if(ora[i]+b>=s && ora[i]+b<=t)
        cora++;
    }
    printf("%d \n",capp);
    printf("%d",cora);
}

#include<stdio.h>
int main()
{
    int d1=0,d2=0,n,arr[100][100],diff;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            d1=d1+arr[i][j];
            if((i+j)==n-1)
            d2=d2+arr[i][j];
        }
        
    }
    diff=abs(d1-d2);
    printf("%d",diff);
}

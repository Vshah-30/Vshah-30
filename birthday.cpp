#include<stdio.h>
int main()
{
    int n,tallest,count=0;
    int i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    tallest=ar[0];
    for(i=0;i<n-1;i++)
    {
        if(tallest<=ar[i+1])
        {
            tallest=ar[i+1];
        }

    }
    for(i=0;i<n;i++)
    {
        if(tallest==ar[i])
        count++;
    }
    printf("%d",count);
}

#include<stdio.h>
int main()
{
    int n;
    unsigned long long int ar[100],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%llu",&ar[i]);
        count=count+ar[i];
    }
    printf("%llu",count);
}

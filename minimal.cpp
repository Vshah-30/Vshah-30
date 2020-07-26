#include<stdio.h>
int main()
{
    int i,temp;
    unsigned long long int arr[100],min=0,max=0;
    for(i=0;i<5;i++)
    {
        scanf("%llu",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        if(arr[i+1]<arr[i])
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
        min=min+arr[i];
    }
    for(i=0;i<4;i++)
    {
        if(arr[i+1]>arr[i])
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
        max=max+arr[i];
    }
    printf("%llu %llu",min,max);

}

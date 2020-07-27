#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int grade[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&grade[i]);
    }
    for(i=0;i<n;i++)
    {
        if(grade[i]<38)
        printf("%d \n",grade[i]);
        if(grade[i]%5<3&&grade[i]>=38)
        printf("%d \n",grade[i]);
        if(grade[i]%5>=3&&grade[i]>=38)
        printf("%d \n",((grade[i]/5)+1)*5);
    }
}

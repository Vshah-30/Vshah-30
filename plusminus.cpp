#include<stdio.h>
int main()
{
    int n,pos=0,neg=0,zero=0,i,ar[100];
    float rpos,rneg,rzero;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d \t",&ar[i]);
        if(ar[i]>0)
        pos++;
        if(ar[i]<0)
        neg++;
        if(ar[i]==0)
        zero++;
    }
    rpos=(float)pos/n;
    rneg=(float)neg/n;
    rzero=(float)zero/n;
    printf("%10.6f \n",rpos);
    printf("%10.6f \n",rneg);
    printf("%10.6f \n",rzero);
}

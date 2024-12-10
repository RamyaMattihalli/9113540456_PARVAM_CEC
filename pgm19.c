#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("summation of %d natural number is=%d",n,sum);
    return 0;
}
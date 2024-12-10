#include<stdio.h>
int main()
{
    int n,m=1;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<n; i++)
    {
        m=m*2;

    }
    printf("power of %d is %d",n,m);
    return 0;
}
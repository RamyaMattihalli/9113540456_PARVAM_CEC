#include<stdio.h>
int main()
{
    int first,last;
    scanf("%d %d",&first,&last);
    for(int i=first; i<=last; i++)
    {
        if(i<=7)
        {
            printf("%d",i);
        }
    }
    return 0;
    }
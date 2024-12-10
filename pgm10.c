#include<stdio.h>
int main()
{
    int first,last;
    scanf("%d %d",&first,&last);
    for(int i=first; i<=last; i++)
    {
     int output=i*i;  

printf("%d ",output );
    }
    return 0;
}
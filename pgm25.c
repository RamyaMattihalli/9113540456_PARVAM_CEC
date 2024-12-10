#include<stdio.h>
int main()
{
    int n=0,*p=&n;
    scanf("%d ",&n);
    printf("var n value %d",n,&n);
    printf("\n pointer p target value %d",*p,p,&p);
    return 0;
}
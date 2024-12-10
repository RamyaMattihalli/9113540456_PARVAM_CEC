#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("summation of %d is %1d",n,fib(n));
}
log fib(int no)
{
    if(no<=0) return 0;
    if(n==1) return 1;
    return fib(no-2)+fib(no-1);
}
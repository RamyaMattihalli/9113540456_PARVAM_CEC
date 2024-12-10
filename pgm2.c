#include<stdio.h>
int main()
{
    int m=10,n=20;
    printf("before swapping m=%d n=%d",m,n);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("after swapping m=%d n=%d",m,n);
return 0;
} 
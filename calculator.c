#include<stdio.h>
int main()
{
    int sum,diff,mul,div;
    int a,b;
    a=10;
    b=20;
    sum=a+b;
    diff=a-b;
    mul=a*b;
    if (b!=0)
    {
        div=a/b;
    }
    printf("sum=%d",sum);
    return 0;
}
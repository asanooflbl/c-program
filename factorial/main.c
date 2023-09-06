#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d factorial =%d",n,fact);
    return 0;
}
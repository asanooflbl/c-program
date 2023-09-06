#include<stdio.h>
int main()
{
    int n,a,r,result=0;
    printf("enter the number");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        result=result+(r*r*r);
        n=n/10;
    }
    if(a==result)
      printf("number is armstrong");
    else
    {
        printf("number is not armstrong");
    }
    return 0;
}
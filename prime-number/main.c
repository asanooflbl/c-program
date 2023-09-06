#include<stdio.h>
int main()
{
    int n;
    printf("enter the limit\n");
    scanf("%d",&n);
    int i,prime=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
        prime=1;
        break;
        }
    
    }
    if(prime==0)
    {
        printf("the number is prime");
    }
    else{
        printf("number is not prime");
    }
    return 0;
}

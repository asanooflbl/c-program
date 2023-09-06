#include<stdio.h>
int main()
{
    int n,sum=0,rem,temp;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("the number is palindrome");
        
    }
    else
    {
        printf("number is not palindrome");
    }
    return 0;
}


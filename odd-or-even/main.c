#include<stdio.h>
int main()
{
    int a,s;
    printf("enter the number");
    scanf("%d",&a);
    s=a%2;
    if(s==0)
    {
        printf("number is %d even",a);
        
    }
    else
    {
        printf("number is %d odd",a);
    }
    return 0;
}
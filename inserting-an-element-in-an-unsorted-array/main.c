
#include <stdio.h>
int insertSorted(int arr[],int n,int key,int capacity)
{
if(n>=capacity)
 return n;
 
 arr[n]=key;
 return (n+1);
}
int main()
{
    int arr[20] ={27,28,37,77,47,67};
    int capacity=sizeof(arr)/sizeof(arr[0]);
    int i, n=6;
   int key=87;
    printf("\nbefore insertion : ");
    for(i=0;i<n;i++)
    printf("%d ", arr[i]);
    
    n=insertSorted(arr,n,key,capacity);
    printf("\nafter insertion : ");
    for(i=0;i<n;i++)
    printf("%d ", arr[i]);
    return 0;
}


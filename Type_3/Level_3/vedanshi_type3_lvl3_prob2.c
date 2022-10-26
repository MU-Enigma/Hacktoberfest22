#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }   
    int count=0;
    int index=0;
    while(index<n)
    {        
    for(int j=(index+1);j<n ;j++)
    {        
        if(a[j]<a[index])
        {
            arr[index]= arr[index]+1;
        }        
    }
    index = index+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
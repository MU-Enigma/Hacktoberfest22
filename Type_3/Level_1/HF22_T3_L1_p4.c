//MaitreyaGuduru
//SE20UCSE083
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp, root;

    root = n/2;
    temp = 0;

    while(root != temp)
    {
        temp = root;

        root = (n/temp + temp)/2;
    }
    printf("%d\n",root);
}
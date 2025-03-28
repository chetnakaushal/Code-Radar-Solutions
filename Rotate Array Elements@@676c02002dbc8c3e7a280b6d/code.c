#include <stdio.h>
int main()
{
    int i,n,pos,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
    int temp=a[n-1];
    for(i=n-2;i>pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
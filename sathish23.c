#include <stdio.h>

int main()
{
    int a[5],n,i;
    printf("enter the array");
    scanf("%d",&n);
    printf("enter the value");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    if(a[1]<a[2]&&a[1]<a[3])
    {
        printf("%d",a[1]);
    }
    else if(a[2]<a[1]&&a[2]<a[3])
    {
        printf("%d",a[2]);
    }
    else
    {
        printf("%d",a[3]);
    }
    
}

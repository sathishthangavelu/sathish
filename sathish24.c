#include <stdio.h>
#include<conio.h>
int main()
{
    int a[3],i,j;
    clrscr();
    printf("enter the value");
    for(i=1;i<=3;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=3;i++)
    {
    for(j=i+1;j<=3;j++)
    {
        if(a[i]>a[j])
        {
            int t;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        } }
        for(i=1;i<=3;i++)
        printf("%d ",a[i]);
    return 0;
}

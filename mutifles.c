#include <stdio.h>
void main()
{
    int a,b,i;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
    b=a*i;
    printf("%d  ",b);
    }
}

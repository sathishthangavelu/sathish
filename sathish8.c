#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
        printf("the natural value is %d",sum);
        return 0;
}

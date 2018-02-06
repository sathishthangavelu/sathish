#include <stdio.h>
void main()
{
    int a;
    printf("entre the year=");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("the year is leap year");
    }
        else
        {
            printf("not leap year");
        }
    }

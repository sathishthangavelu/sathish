#include <stdio.h>
void main()
{
int a,b=0,c,d;
printf("enter the number");
scanf("%d",&a);
b=a;
while(b!=0)
{
c=b%10;
d=d+c*c*c;
b=b/10;
}
if(d==a)
{
    printf("It is armstrong number");
}
else
{
    printf("It is not armstrong number");
}
}


#include<stdio.h>
void main()
{
int a,n,d,tot,sum=0,i;
printf("enter the a,n,d");
scanf("%d%d%d",&a,&n,&d);
for(i=a;i<=n*d;i=i+d)
{
    sum=sum+i;
}
printf("%d",sum);
}

#include<stdio.h>
void main()
{
int a[50],i,j,num,temp;
printf("enter the array");
scanf("%d",&num);
printf("enter the value");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
{
    if(a[j]>a[j+1])
    {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;



      }

}

}
for(i=0;i<num;i++)
{
printf("%d\t",a[i]);
}
printf("\n%d",a[(num)/2]);
}

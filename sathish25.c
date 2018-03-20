#include<stdio.h>
void main()
{
int m[50],i,j,num,temp;
printf("enter the array");
scanf("%d",&num);
printf("enter the value");
for(i=0;i<num;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<num;i++)
{
{
    if(m[j]>m[j+1])
    {
       temp=m[j];
       m[j]=m[j+1];
       m[j+1]=temp;



      }

}

}
for(i=0;i<num;i++)
{
printf("%d\t",m[i]);
}
printf("\n%d",m[(num)/2]);
}

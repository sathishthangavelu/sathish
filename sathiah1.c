#include<stdio.h>
void main()
{
    int num;
    printf("Enter an integer number =");
    scanf("%d",&num);
    if(num<0)
    printf("number is negative");
    else if(num>0)
    printf("number is positive");
    else
    printf("number is zero");
}


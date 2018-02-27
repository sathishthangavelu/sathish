
#include<stdio.h>
void main()
{
int a, b, i, x;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &a, &x);
printf("Prime numbers between %d and %d are: ", a, x);
while (a < x)
{
b= 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
b = 1;
break;
}
}
if (b == 0)
printf("%d ", a);
++a;
}
return 0;
}

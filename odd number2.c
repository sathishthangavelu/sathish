#include <stdio.h>

int main(void) 
{
int a,b,j;
scanf("%d %d",&a,&b);
for(j=a+1;j<b;j++)
{
	if(j%2==1)
	printf("%d ",j);
}
	return 0;
}

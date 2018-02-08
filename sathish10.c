
#include <stdio.h>

void main()
{
	int a,i;
	int count=0;
	printf("entre the number=");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	    a/=10;
	    ++count;
	}
	printf("the integer%d",count);
}


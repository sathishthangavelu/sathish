#include<stdio.h>
void main()
{
	int min,max,j,temp;
	printf("ENTER THE RANGE:\n");
	scanf("%d%d",&min,&max);
	printf("TO PRINT THE ARMSTRONG NO'S BETWEEN THE RANGE:\n");
	for(j=min;j<=max;j++)
	{
		 
		int num=j;
		int sum=0;
		while(num>0)
		{
		temp=num%10;
		sum=sum+(temp*temp*temp);
		num=num/10;
		}
		if(j==sum)
		{
		printf("%d\n",j);
		}
	}
}


#include<stdio.h>
main()
{
	int num1,num2,sum,i,j;
	printf("Enter Range you want to print perfect no : ");
	scanf("%d%d",&num1,&num2);
	printf("perfect numbers are : ");
	for(i=num1;i<=num2;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
			
		}
			if(sum==i)
			printf("%d\n",i);
		
		
	}
	
}

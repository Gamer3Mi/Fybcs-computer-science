/* programme for store 10 values in array and print its sum*/
#include<stdio.h>
main()
{
	int a[10],i,sum=0;
	printf("Enter 10 values = ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("given values are = \n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<10;i++)
		{
			sum=sum+a[i];
		}
			printf("Sum is = %d",sum);
	
	return(0);
	
}

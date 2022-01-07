	/* programme for store 10 values in array and print its sum*/
#include<stdio.h>
main()
{
	int a[10],i;
	printf("Enter 10 values = ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Even values are = \n");
	for(i=0;i<10;i++)
	{
	  if(a[i]%2==0)
	    {
	    	printf("%d\n",a[i]);
		}
		
	}
	return(0);
	
}

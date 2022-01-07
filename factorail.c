#include<stdio.h>
main()
{
	int b,a,s=1;
	printf("Enter a Number : ");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		s=s*a;
		a--;
		
	}
	printf("Factorial of Number %d  is %d ",b,s);
	return(0);
	
}

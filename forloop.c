/*programme using while loop*/
#include<stdio.h>
main()
{
	int a=1,sum=0;
	int b;
	
	printf("Enter the number for printing = ");
	scanf("%d\n",&b);
	
	while(a<=b);
	{
		printf("%d\n",a);
		sum=sum+a;
		a++;
	}
	printf("Sum of this NUmber is = %d",sum);
	return(0);
}

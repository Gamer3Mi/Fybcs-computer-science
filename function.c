#include<stdio.h>
main()
{
	int a,dupli,y=0,z=0;
	printf("Enter a  Numbers : ");
	scanf("%d",&a);
	dupli=a;
	while(a>0)
	{
		y=a%10;
		z=(z*10)+y;
		a=a/10;
	}
	if(dupli==z)
	{
		printf("no is palindrome number");
	}
	else
	{
				printf("no is not palindrome number");
	}
	return(0);
	
}

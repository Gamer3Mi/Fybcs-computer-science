#include<stdio.h>
main()
{
	int i,c=0,a,b=0,v;
	printf("Enter a Number : ");
	scanf("%d",&a);
	v=a;
	for(i=a;i>0;i--)
	{
		c=a%10;
		b=b+c*c*c;
		a=a/10;
	}
	if(b==v)
	{
		printf("Number is Armstrong NUmber ");
	}
	else
	{
		printf("Number is not Armstrong NUmber ");
	
}
}

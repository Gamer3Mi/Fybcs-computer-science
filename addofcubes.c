/*Programme for accept two numbers and display its cubes addition*/
#include<stdio.h>
main()
{
	int m,num1,num2,c,d;
	printf("Enter Two Numbers : ");
	scanf("%d%d",&num1,&num2);
	c=num1*num1*num1;
	d=num2*num2*num2;
	m=c+d;
	printf("Addition Of Cubes Of Given Two Number Is : %d",m);
	return(0);
	
}

/*program for find the averageof the motorcycle */
#include<stdio.h>
main()
{
	int f,d,a;
	printf("Enter distance and fuel = ");
	scanf("%d%d",&d,&f);
	a=d/f;
	printf("Average is = %d",a);
	return(0);
}

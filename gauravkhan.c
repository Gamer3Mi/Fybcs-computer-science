#include<stdio.h>
main()
{
	int x,y;
	printf("Enter two Numbers : ");
	scanf("%d%d",&x,&y);
	if(x<0 && y<0)
	{
		printf("Point is in third quadrant");
	}
	else if (x>0 && y<0)
	{
		printf("Point is in fourth quadrant");
	}
	else if (x<0 && y>0)
	{
		printf("Point is in second quadrant");
	}
	else if (x>0 && y>0)
	{
		printf("Point is in first quafrant");
	}
	return(0);
}

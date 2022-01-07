#include<stdio.h>
main()
{
	int x,y;
	printf("Enter two Numbers");
	scanf("%d%d",&x,&y);
	x=x-y;
	y=x+y;
	x=y-x;
	printf("After swapping this Numbers : %d %d",x,y);
	return(0);
}

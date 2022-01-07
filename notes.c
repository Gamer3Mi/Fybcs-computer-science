#include<stdio.h>
main()
{
	int w,x,y,z,a,c;
	printf("Enter Amount to the Withdraw : ");
	scanf("%d",&w);
	x=w/100;
	w=w%100;
	y=w/50;
	w=w%50;
	z=w/10;
	w=w%10;
	a=w/5;
	a=w%5;
	c=w;
	printf("\nNotes of 100 are : %d\n",x);
	printf("\n");
	printf("Notes of 50 are : %d\n",y);
	printf("\n");
	printf("Notes of 10 are : %d\n",z);
	printf("\n");
	printf("Notes of 5 are : %d\n",a);
	printf("\n");
	printf("Notes of 1 are : %d\n",c);
	return(0);
	
}

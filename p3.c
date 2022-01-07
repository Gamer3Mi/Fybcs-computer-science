/*programme for input quantity and rate and output total amount and discount */
#include<stdio.h>
main()
{
	int a,r,q,d;
	printf("Enter quantity and rate of products ...");
	scanf("%d%d",&q,&r);
	a=q*r;
	d=a*0.1;
	printf("Total Amount is ....%d\n",a);
	printf("discount  is ....%d\n",d);
	
}

/*programme for radius of ring */
#include<stdio.h>
float pi=3.14;
main()
{
	float r,d,p,a;
	printf("Enter Outer and Inner  Radius of ring ....: ");
	scanf("%f%f",&d,&r);
	p=2*pi*(d+r);
	printf("Perimeter of Ring is .... : %f",p);
	a=pi*(d+r)*(d-r);
	printf("Area of Ring is .... : %f",a);
	return(0);
	
}

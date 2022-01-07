/*Prograame for print the final velocity and distance*/
#include<stdio.h>
main()
{
	float u,a,t,v,s;
	printf("Enter the values of Initial Velocity , Acceleration and Time ... :   ");
	scanf("%f%f%f",&u,&a,&t);
	v=u+a*t;
	printf("Final Velocity is ... : %f\n",v);
	s=u+a*t*t;
	printf("Total Distance Travelled is ... : %f",s);
	
}

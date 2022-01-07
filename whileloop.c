/*programme for finding surface area and volume of cylinder*/
#include<stdio.h>
main()
{
	float vol,heght;
	float sa,radii;
	
	printf("please Enter radius and height of cylinder respectively = \n");
	scanf("%f%f",&radii,&heght);
	
	sa=(2*3.14*radii*radii)+(2*3.14*radii*heght);
	vol=3.14*radii*radii*heght;
	
	printf("Surface Area of cylinder = %f\n",sa);
	
	printf("Volume of cylinder = %f\n",vol);
	
	
}

/*programme for tempreature in farahnheite and print in celsius and kelvin*/
#include<stdio.h>
main()
{
	float f,c,k;
	printf("Enter The Tempreature In Fahrenheit :- ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("The Tempreature In Celsius is : %f\n",c);
	k=c+273.15;
	printf("The Tempreature In Kelvin is : %f\n",k);
	return(0);
}

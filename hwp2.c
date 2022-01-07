//programme for input salary & caluculate following
//1) DA 2) HRA 3)GROSS 
#include<stdio.h>
main()
{
	float da,hra,gross,b_s;
	printf("Enter Your Basic salary ..\n");
	scanf("%f",&b_s);
	if(b_s<=5000)
	{
	 	da=b_s*0.1;		
	 	hra=b_s*0.05;
	}
	else
	{
		da=b_s*0.2;
		hra=b_s*0.1;
	}
	gross=b_s+da+hra;
	printf("DA You Get ...%f\n",da);
	printf("HRA You Get ...%f\n",hra);
	printf("Total Gross Amount is =  %f\n",gross);
	return(0);
}

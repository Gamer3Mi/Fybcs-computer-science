/*programme for input marks and calculate total and percentage and display result with class obtained by student*/
#include<stdio.h>
main()
{
	int m1,m2,m3,t;
	float p;
	printf("Enter Marks Of Three Subjects ... \n");
	scanf("%d%d%d",&m1,&m2,&m3);
	t=m1+m2+m3;
	p=t/3;
	printf("Total Marks Obtained ....%d\n",t);
	printf("Total Percentage Obtained ....%f\n",p);
	if(t<=300 && t>=280)
	{
		printf("You Paas With 'A' GRADE ");
	}
	else if(t<280 && t>=260)
	{
		printf("You Pass With 'B' GRADE ");
	}
	else if(t<260 && t>=240)
	{
		printf("You Pass With 'B' GRADE ");
	}
	else
	{
		printf("You Pass With 'D' GRADE ");
	}
	return(0);

    
}

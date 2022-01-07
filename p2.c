/*programme for input three subjects marks and output total and percentag*/
#include<stdio.h>
main()
{
	int p,m1,m2,m3,t;
	printf("Enter Three Subjects marks .... ");
	scanf("%d%d%d",&m1,&m2,&m3);
	t=m1+m2+m3;
	p=t/3;
	printf("Total Marks are  .... %d\n",t);
	printf("Percentage is equal to  .... %d\n",p);
	return(0);
	
}

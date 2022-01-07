#include<stdio.h>
main()
{
	int t,m1,m2,m3;
	float p;
	printf("Enter three subjects marks : ");
	scanf("%d%d%d",&m1,&m2,&m3);
	t=m1+m2+m3;
	p=(float)t/3;
	printf("\nTotal Marks are : %d\n",t);
	printf("\nTotal percentage  are : %f",p);
	
}

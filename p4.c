/*programme for convert tempreature from celcius to faranheit*/
#include<stdio.h>
main()
{
	int c,f;
	printf("Enter tempreture in celcius ...",c);
	scanf("%d",&c);
	f=c+32*9/5;
	printf("Tempreture in faranheite ...%d",f);
	return(0);
	
}

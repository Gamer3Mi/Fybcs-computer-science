#include<stdio.h>
main()
{
	enum month {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
	int m,y;
	printf("Enter Your Year of Birth :  ");
	scanf("%d",&y);
	printf("\nEnter Your Month of Year :  ");
	scanf("%d",&m);
	if(y%4==0 && y%400==0 || y%100!=0)
	{
	switch(m)
	{
		case Jan : printf("31");
			 	   break;
		case Feb : printf("29");
			 	   break;
		case Mar : printf("31");
			 	   break;
  		case Apr : printf("30");
			 	   break;
		case May : printf("31");
			 	   break;
   		case Jun : printf("30");
			 	   break;
		case Jul : printf("31");
			 	   break;
		case Aug : printf("31");
			 	   break;
		case Sep : printf("30");
			 	   break;
		case Oct : printf("31");
			 	   break;
		case Nov : printf("30");
			 	   break;
		case Dec : printf("31");
			 	   break;		 	   
	}
}
else
{
	switch(m)
	{
		case Jan : printf("31");
			 	   break;
		case Feb : printf("28");
			 	   break;
		case Mar : printf("31");
			 	   break;
  		case Apr : printf("30");
			 	   break;
		case May : printf("31");
			 	   break;
   		case Jun : printf("30");
			 	   break;
		case Jul : printf("31");
			 	   break;
		case Aug : printf("31");
			 	   break;
		case Sep : printf("30");
			 	   break;
		case Oct : printf("31");
			 	   break;
		case Nov : printf("30");
			 	   break;
		case Dec : printf("31");
			 	   break;
}
}
	printf("  Days in this month");
	return(0);
}

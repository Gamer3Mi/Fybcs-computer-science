#include<stdio.h>
main()
{
	enum month {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
	int m;
	printf("Enter Your Month of Year : ");
	scanf("%d",&m);
	switch(m)
	{
		case Jan : printf("January");
			 	   break;
		case Feb : printf("February");
			 	   break;
		case Mar : printf("March");
			 	   break;
  		case Apr : printf("April");
			 	   break;
		case May : printf("May");
			 	   break;
   		case Jun : printf("Jun");
			 	   break;
		case Jul : printf("Jully");
			 	   break;
		case Aug : printf("August");
			 	   break;
		case Sep : printf("September");
			 	   break;
		case Oct : printf("October");
			 	   break;
		case Nov : printf("November");
			 	   break;
		case Dec : printf("December");
			 	   break;		 	   
	}
	printf("  is Your Month of Birth");
	return(0);
}

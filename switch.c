/*programe for switch statement*/
#include<stdio.h>
main()
{
	int a;
	printf("enter the number between 0 to 10\n\t");
	printf("\n");
	scanf("%d",&a);
	switch(a)
	{
	
	case 0: printf("\tzero");
			break;
	case 1: printf("\tone");
			break;
	case 2: printf("\ttwo");
	    	break;
	case 3: printf("\tthree");
			break;
	case 4: printf("\tfour");
			break;
	case 5: printf("\tfive");
			break;
	case 6: printf("\tsix");
			break;
	case 7: printf("\tseven");
			break;
	case 8: printf("\teight");
			break;
	case 9: printf("\tnine");
			break;
	case 10: printf("\tten");
			break;
	default :printf("\tInvalid Number");
}
}

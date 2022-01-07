//programme for input two opearants and 1 operator and perform operation
#include<stdio.h>
main()
{
	int a,b,d;
	char c;
	printf("Enter two numbers   .. ");
	scanf("%d%d",&a,&b);
	printf("\nEnter the operation like '+''-''*''/'  ");
	c=getche();
	
	switch(c)
	{
		case '+' : d=a+b;
			 	   printf("\nAdditon of given Number is  : %d",d);
			 	   break;
		case '-' : d=a-b;
			 	   printf("\nSubstraction of given number is : %d",d); 	   
				   break;
        case '*' : d=a*b;
			 	   printf("\nMultiplication of given Number is  : %d",d);
			 	   break;
        case '/' : d=a/b;
			 	   printf("\nDivision of given Number is  : %d",d);
			 	   break;
		default  : printf("\nInvalide operation ");	 	   
	}
	return(0);
	
}

#include<stdio.h>
int main()
{
	int a,b,res;
	char c;
	printf("Enter Two Numbers : ");
	scanf("%d%d",&a,&b);
	printf("\nEnter a Operator like (+,-,*,/) : ");
	scanf("%c",&c);
	switch(c)
	{
		case '+' : res=a+b;
			 	   printf("\nAddition Of Two Number is : %d",res);
			 	   break;
		case '-' : res=a-b;
			 	   printf("\nSubstraction Of Two Number is : %d",res);
			 	   break;
  		case '*' : res=a*b;
		  	 	   printf("\nMultiplication Of Two Number is : %d",res);
			 	   break;
  		case '/' : res=a/b;
		  	 	   printf("\nDivision Of Two Number is : %d",res);
			 	   break;
	   default : printf("Invalid Entry");
	
	}
	return(0);
}

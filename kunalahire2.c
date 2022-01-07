#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{
	int k,p,j,s=0,num;
	gotoxy(10,10);
	printf("Enter a NUmber : ");
	scanf("%d",&num);
	for(j=num;j>0;j--)
	{
		
		
	s=num%10;
	if(s==0)
	break;
    switch(s)
	{
		case 0 : printf("%d = Zero",s);
			   	 break;
		case 1 : printf("%d = One",s);
			   	 break;	   	 
		case 2 : printf("%d = Two",s);
			   	 break;
		case 3 : printf("%d = Three",s);
			   	 break;
		case 4 : printf("%d = Four",s);
			   	 break;
		case 5 : printf("%d = Five",s);
			   	 break;
		case 6 : printf("%d = Six",s);
			   	 break;
		case 7 : printf("%d = Seven",s);
			   	 break;
		case 8 : printf("%d = Eight",s);
			   	 break;
		case 9 : printf("%d = Nine",s);
			   	 break;
	    default : printf("Invalid Entry");
	}
	printf("\n");
	num=num/10;
	}
	return(0);
	
}

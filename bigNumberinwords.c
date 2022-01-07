#include<stdio.h>
main()
{
	int i,num1,num2,x=0,y=0;
    printf("Enter the Number ");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++)
    {
        x=num1%10;
        y=y*10+x;
        num1=num1/10;
    }
    
//    printf("The Reverse Number is %d",y);
while(y!=0)
{
	switch(y%10)
	{
		case 0: printf(" zero ");
        break;
        case 1: printf(" one ");
        break;
        case 2: printf(" two ");
        break;
        case 3: printf(" three ");
        break;
        case 4: printf(" four ");
        break;
        case 5: printf(" five ");
        break;
        case 6: printf(" six ");
        break;
        case 7: printf(" seven ");
        break;
        case 8: printf(" eight ");
        break;
        case 9: printf(" nine ");
        break;
        default : printf("Invalid Entry");
        }
    y=y/10;

}



}

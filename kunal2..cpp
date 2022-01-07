#include<stdio.h>
main()
{
	int k=0,i,p,j,s=0,num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	for(i=num;i>0;i++)
	{
		s=num%10;
		j=j*10+s;
		num=num/10;
	}
	p=j;
	while(p!=0)
	{
		k=p%10;
		if(p==0)
		break;
		switch(k)
		{
	 	    case 0 : printf("%d = Zero",k);
			  	  	 break;
	        case 1 : printf("%d = One",k);
				   	 break;	   	 
	        case 2 : printf("%d = Two",k);
  	   	  		   	 break;
	        case 3 : printf("%d = Three",k);
				   	 break;
	        case 4 : printf("%d = Four",k);
				   	 break;
	        case 5 : printf("%d = Five",k);
				   	 break;
		    case 6 : printf("%d = Six",k);
				   	 break;
            case 7 : printf("%d = Seven",k);
				   	 break;
		    case 8 : printf("%d = Eight",k);
				   	 break;
		    case 9 : printf("%d = Nine",k);
				   	 break;
            default : printf("Invalid Entry");
		}
		p=p/10;
		printf("\n");
	}
	return(0);
	
}

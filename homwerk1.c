#include<stdio.h>
main() 
{
    int x[10],i,j,count=1;
    printf("Enter 10 Numbers ");
    for (i=0;i<10;i++) 
	{
        scanf("%d",&x[i]);
    }

    for (i=0;i<10;i++) 
	{
        
        for (j=i+1;j<10;j++) 
		{ 
            if (x[i]==x[j]) 
			count++;
        }
        printf("The number %d is repeated %d times\n",x[i],count);
    }
    return(0);
}

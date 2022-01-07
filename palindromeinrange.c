#include<stdio.h>
main()
{
    int i,j,n1,n2,n3;
    printf("Enter the range : ");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            break;
  		
		}
            if(i==j)
           	printf(" %d ",j);

    }
}

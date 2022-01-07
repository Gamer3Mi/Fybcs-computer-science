#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter 18 values to store in array in Row wise Manner = ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    scanf("%d",&a[i][j]);
			printf("	%d   ",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\n");
	printf("the second matrix is = \n");
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    scanf("%d",&b[i][j]);
			printf("	%d   ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("The Addition of two matrix is = \n");
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    
			printf("	%d   ",c[i][j]=a[i][j]+b[i][j]);
		}
		printf("\n\n");
	}
	
	
	return(0);
}

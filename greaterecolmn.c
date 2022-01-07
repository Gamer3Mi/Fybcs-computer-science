#include<stdio.h>
main()
{
	int a[3][3],i,j,c[3]={0};
	printf("Enter 9 Numbers : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%4d",a[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	printf("Greatest among each column : \n");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(c[j]<a[i][j])
			{
   			   c[j]=a[i][j];
			}
			
		}
	}
	for(j=0;j<3;j++)
	{
		printf("%4d",c[j]);
	}
	return(0);
}

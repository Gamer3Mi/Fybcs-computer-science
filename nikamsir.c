#include<stdio.h>
main()
{
	int m[3][3],sum[3]={0};
	int i,j;
	printf("Enter 9 values : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
			printf("%4d",m[i][j]);
		}
		printf("\n");
	}
	return(0);
}


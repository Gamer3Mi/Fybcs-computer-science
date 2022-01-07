#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("Enter 9 Numbers for Pinting array  : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    scanf("%d",&a[i][j]);
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
}

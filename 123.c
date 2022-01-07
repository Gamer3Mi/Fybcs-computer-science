#include <stdio.h>

int main()
{
    int max,m,n;  
	int arr[10][10],i,j,res[n];               //Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   //Matrix Size Initialization
    
    printf("\nEnter the elements of the matrix: \n");
    for(i=0;i<m;i++)    //Matrix Initialization
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(i=0;i<m;i++)     //Print the matrix
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    i = 0, j;
    max = 0;
    res[m];
    while (i < n)   //Check for the largest element in an array
    {
       for ( j = 0; j < m; j++)
       {
           if (arr[j][i] > max)      //Check if the element is greater than the maximum element of the column and replace it
           {
              max = arr[j][i];
           }
        }
        res[i] = max;
        max = 0;
        i++;
    }
    for( i = 0; i < n; i++)      //Print thee largest element
    {
       printf("Largest element in row %d is %d \n", i, res[i]);
    }
    
    return 0;
}


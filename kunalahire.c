#include<stdio.h>
int main()
{	
	int p,num1;
	printf("Enter the Number :  ");
	scanf("%d",&num1);
	p=odd(num1);
}
odd(int num)
{
	int s,i;
	for(i=num;i>0;i--)
	{
		s=num%10;
		if(s%2!=0)
		printf("%d is Odd  \n",s);
		num=num/10;
	}
	return(s);
}

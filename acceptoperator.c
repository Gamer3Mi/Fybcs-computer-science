#include<stdio.h>
main()
{
    int n1,n2,res;
    char c;
    printf("Enter two NUmbers : ");
    scanf("%d%d",&n1,&n2);
    printf("Enter any operator : ");
    scanf("%c",&c);
    switch(c)
    {
        case '+': res=n1+n2;
        printf("Addition of NUmbers is.. %d",res);
        break;
        case '-': res=n1-n2;
        printf("Substraction of NUmbers is.. %d",res);
        break;
        case '*': res=n1*n2;
        printf("Multiply of NUmbers is.. %d",res);
        break;
        case '/': res=n1/n2;
        printf("Division of NUmbers is.. %d",res);
        break;
        default : printf("You Enter Wrong Operator");
    }

}

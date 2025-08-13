#include<stdio.h>
#include<conio.h>

void main()

{
    int num1,num2;
    char op;
    
    printf("enter the num1 :");
    scanf ("%d",&num1);
    
    printf("enter the num2 :");
    scanf("%d",&num2);
    
    printf(" give the operator:");
   scanf("%c",&op);
   
    
    if(op == '+')
    {
        printf("sum: %d",num1+num2);
    }
    else if (op == '-')
    {
        printf("sub: %b",num1-num2);
    }
    else if(op == '*')
    {
        printf("mul: %d",num1*num2);
    }

    else 
    {
        printf("invalid");
    }
}

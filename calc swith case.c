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
   
   switch(op)
   {
       case '+':
       printf("sum :%d",num1+num2);
       break;
       
       case '-' :
       printf("diff :%d",num1-num2);
       break;
       
       case '*':
       printf("mul :%d",num1*num2);
       break;
       
       case '/' :
       printf("div :%d",num1/num2);
       break;
       
       default :
       printf("failed");
       
   }
   }

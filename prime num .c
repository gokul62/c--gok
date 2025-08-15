#include<stdio.h>
#include<conio.h>

void main()

{
 int n,i ;
 int flag = 0;
 
 printf("Enter the given num :");
 scanf("%d",&n);
 
 for(i=2;i<n;i++)
 
 {
     if(n%i !=0)
     continue ;
     else 
     {
         flag = 1;
         printf("the value is not prime ");
         break;
     }
 }
 
 if(flag == 0)
 {
     printf("prime num");
 }
 
 getch();
}
 
 
 

#include<stdio.h>
#include<conio.h>

void main()

{
  int year;
  printf("enter the year");
  scanf("%d",&year);
  
  if(year%100 == 0)
  {
      if(year%400 == 0)
      {
          printf("leap year");
      }
      else 
      {
          printf("not leap year");
      }
  }
  else 
  {
      if(year%4 == 0)
      {
          printf("leap year");
      }
      else
      {
          printf(" non leap year");
      }
  }
}

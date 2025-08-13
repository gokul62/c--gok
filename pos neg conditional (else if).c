#include<stdio.h>
#include<conio.h>

void main()

{
    int num;
    printf("the the num:");
    scanf ("%d",&num);
    
    if (num >0)
    {
        printf("positive");
    }
    else if (num ==0)
    {
        printf("zero");
    }
    else
    {
        printf ("negative");
    }
}

#include<stdio.h>
#include<conio.h>

void main()

{
    
    int heights[50];
    int n,i; // number of students 
    int sum =0;
    float avg;
    
    printf("enter the no of students: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        printf("element %d:",i); //getting input 
        scanf("%d",&heights[i]);
        
        sum = sum + heights[i];
    }
    
    printf("sum : %d",sum);
    
    avg = sum/n;
    
    printf("avg : %f" ,avg);//changing int into float 
}
   
   

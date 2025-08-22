#include <stdio.h>
#include <conio.h>
#include <string.h>

struct book{
    int no;
    char author[50];
    float price ;
};

void main()

{
   
    
    struct book hp; // int a - book hp - hp is variable name 
    hp.no = 7;
    hp.price = 550.78;
    strcpy(hp.author,"Gokul");
    
    printf("%d \n",hp.no);
    printf("%f \n",hp.price);
    printf("%s",hp.author);
}

// str cat 


#include <stdio.h>
#include <string.h>

int main()  // use int main instead of void main
{
    char str[50];
    char str1[50];

    printf("Enter the first string: ");
    scanf("%s", str);   // no & for strings, since str is already a pointer

    printf("Enter the second string: ");
    scanf("%s", str1);

    // Concatenate
    strcat(str, str1);  
    printf("After concatenation: %s\n", str);

    // Compare
    if (strcmp(str, str1) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
        
        

    return 0;
}

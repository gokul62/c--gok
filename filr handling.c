#include <stdio.h>

int main()
{
    FILE *fp;
    char c[100];

    // Open file in read mode
    fp = fopen("text.txt", "r");  
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1; // exit program if file not found
    }

    // Read first 4 characters (since fgets reads n-1 chars) 
    fgets(c, 5, fp);  
    printf("%s\n", c);

    fclose(fp);
    return 0;
}

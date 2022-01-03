#include <stdio.h>  
  
int main()  
{  
    int i,j,rows;  
    // Input Rows from user
    printf("Enter the number of rows: ");  
    scanf("%d",&rows);  

    for(i=1; i<=rows; i++)
    {
    //Print spaces in decreasing order of row
    for (j=i; j<rows; j++)
    {
        printf(" ");
    }
    //Print star in increasing order or row
    {  
        for(j=1; j<=rows; j++)  
        {  
            printf("*");  
        }  
        //Move to next line
        printf("\n");  
    }  

    }
    return 0;
}    
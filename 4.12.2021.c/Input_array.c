#include<stdio.h> 

int main(){ 
    int data[7];
    int a;
    printf("Enter first no. 1: ");
    scanf("%d", &data[0]);
    printf("Enter second no. 2: ");
    scanf("%d", &data[1]);
    printf("Enter third no. 3: ");
    scanf("%d", &data[2]);
    printf("Enter fourth no. 4: ");
    scanf("%d", &data[3]);
    printf("Enter fifth no. 5: ");
    scanf("%d", &data[4]);
    printf("Enter sixth no. 6: ");
    scanf("%d", &data[5]);
    printf("Enter seventh no. 7: ");
    scanf("%d", &data[6]);
    for( a = 1; a <= 7; a++)
        printf("Value at %d = %d \n", a, data[a-1]);
    return 0;
    }
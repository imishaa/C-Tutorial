#include<stdio.h> 

int main(){ 
    int i,j,arr[10][10], n = 1, sum = 0;
    for( i = 0; i < 10; i++){
        for( j = 0; j < 10; j++){
            if(i == j){
                arr[i][j] = n;
                n = n+1;
                sum = sum + n;
            }
            else
                arr[i][j] = 0;
        }
    }
    
    printf("Sum is: %d \n", sum);
    for( i = 0; i < 10; i++){
        for( j = 0; j < 10; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
    }

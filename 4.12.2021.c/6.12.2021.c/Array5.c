#include<stdio.h> 

int main(){ 
    int i,j, arr[3][4], n = 12;

    for( i = 0; i < 3; i++){
        if(i % 2 == 0){
            for( j = 0; j < 4; j++){
            arr[i][j] = n;
            n = n-1;
            }
        }
        else{
            for( j = 3; j >= 0; j--){
            arr[i][j] = n;
            n = n-1;
            }
        }
        
    }

    for( i = 0; i < 3; i++){
        for( j = 0; j < 4; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
    }

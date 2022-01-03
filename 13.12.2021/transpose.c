#include<stdio.h> 

int main(){ 
    int i,j;
    int a[4][3];
    int b[3][4];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("Enter value in %d %d : \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<4;i++)
    {
     for(j=0;j<3;j++){
        b[j][i] = a[i][j];
     }
    }

    for(i=0;i<3;i++)
    {
     for(j=0;j<4;j++){
       printf("%d\t", b[i][j]);
     }
     printf("\n");
    }

    return 0;
}
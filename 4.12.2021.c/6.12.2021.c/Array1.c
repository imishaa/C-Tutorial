
#include<stdio.h> 

int main(){ 
    int n[ 5]; 
   int i,j;
      
   for(i = 0; i < 5; i++ ) {
      n[i] = i + 1;  
      for(j = 0; j < i; j++ ) { 
          printf("%d ", n[j] );
      }
   }
    return 0;
    }
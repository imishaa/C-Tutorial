//C program to display the calendar

#include<stdio.h>

int main ()
{
   int p;
   scanf("%d",&p);

   printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");

   int i=0;

   while(i<p-1){
   printf("\t");
   i++;   
}

   int j=i,no=1;

   while(no<=31){
   printf("%d\t",no);
   j++;

   if(j==7){
   printf("\n");
   j=0;
}

   no++;
}

return 0;
}



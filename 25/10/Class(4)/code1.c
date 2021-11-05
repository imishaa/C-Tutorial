#include <stdio.h>

int main()
{
   int p,q;
   printf("Enter the values\n");   
   scanf("%d",&p);
   scanf("%d",&q);

   printf("%d+%d is:%d\n",p,q,p+q);
   printf("%d-%d is:%d\n",p,q,p-q);
   printf("%d*%d is:%d\n",p,q,p*q);
   printf("%d %% %d is:%d\n",p,q,p%q);
   printf("%d/%d is:%d\n",p,q,p/q);


   printf("The value of ++p is %d\n",++p);
   printf("The value of --p is %d\n",--p);
   printf("The value of ++q is %d\n",++q);
   printf("The value of --q is %d\n",--q);
 
return 0;
} 
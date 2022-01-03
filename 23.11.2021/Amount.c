//C program to collect the amount of integer and display in form of- example-:Rs.15,247,886.00

#include <stdio.h>

int main()
{
int a,no,tmp,nd=0,rev=0,tens=1,i=0,data,rv;
scanf("%d",&no);
tmp=no;

while(tmp>0){
a=tmp%10;
nd++;
rev=rev*10+a;
tmp=tmp/10;
}

printf("%d %d",nd,rev);

while(i<(nd%3)){
tens=tens*10;
i++;
}

printf("\n%d",tens);
data=rev%tens;
rev=rev/tens;
printf("\n%d",data);
tmp=data;
rv=0;

while(tmp>0){
a=tmp%10;
rv=rv*10+a;
tmp=tmp/10;
}
printf("\n%d,",rv);

while(rev>0){
data=rev%1000;
tmp=data;
rv=0;

while(tmp>0){
a=tmp%10;
rv=rv*10+a;
tmp=tmp/10;
}
printf("%d,",rv);
rev=rev/1000;
}

printf("\b.00");

return 0;
}
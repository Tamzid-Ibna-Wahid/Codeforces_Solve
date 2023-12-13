#include <stdio.h>
int main(){
   int year,a,x1,x2,x3,x4;
   scanf("%d",&year);
   for(int i=1;;i++){
    year++;
  x4=year%10;
  a=year/10;
  x3=a%10;
  a=a/10;
  x2=a%10;
  x1=a/10;
  if(x1!=x2 && x1!=x3 && x1!=x4 && x2!=x3 && x2!=x4 && x3!=x4)break;
   }
   printf("%d",year);
    return 0;
}
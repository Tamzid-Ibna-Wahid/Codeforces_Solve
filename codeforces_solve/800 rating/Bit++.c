#include <stdio.h>
#include <string.h>
int main(){
    int n,x=0;
  char y[5];
    scanf("%d",&n);
    while(n!=0){
      scanf("%s",y);
      if(y[1]=='+')x++;     // 1 no index e + or - thakbe sob khetre
      else x--;
      n--;
    }
    printf("%d",x);
    return 0;
}
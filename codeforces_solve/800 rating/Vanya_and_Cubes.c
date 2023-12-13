#include <stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    int i=1;
  while(a<=n){
       i++;
       a=a+(i*(i+1))/2;
    }
    if(n==1)printf("1");
    else printf("%d",i-1);
    return 0;
}
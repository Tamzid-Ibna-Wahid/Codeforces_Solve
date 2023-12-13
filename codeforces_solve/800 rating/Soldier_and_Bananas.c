#include <stdio.h>
int main(){
    int t,x,n,money=0;
    scanf("%d%d%d",&t,&x,&n);
    for(int i=1;i<=n;i++){
       money=money+(i*t);
    }
  if(money>x){
    printf("%d\n",(money-x));
  }
  else printf("%d\n",0);
    return 0;
}
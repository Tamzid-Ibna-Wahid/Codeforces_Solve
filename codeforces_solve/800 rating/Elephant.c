#include <stdio.h>
#include <stdlib.h>
int main(){
  int n,x=0;
  scanf("%d",&n);
  if(n==0){
    printf("%d",0);
    exit(1);
  }
  for(int i=5;i>=1;i--){
  while(n>=i){
    n=n-i;
    x++;
  }
  }
  printf("%d",x);
  return 0;
}
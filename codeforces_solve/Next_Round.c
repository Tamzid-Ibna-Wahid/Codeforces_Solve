#include <stdio.h>
int main(){
    int n,x;
    int count=0;
    scanf("%d%d",&n,&x);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
     for(int j=0;j<n;j++){
      if(num[j]>=num[x-1] && num[j]>0){    // x-1 karon array suru hoy 0th index theke
      count++;
      }
    }
    printf("%d",count);
    return 0;
}
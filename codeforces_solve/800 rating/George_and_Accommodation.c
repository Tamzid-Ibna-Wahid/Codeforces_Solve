#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int x[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
         scanf("%d",&x[i][j]);
        }
    }
      for(int i=0;i<n;i++){
       if(x[i][1]-x[i][0]>=2){
        count++;
       }
        }
       printf("%d",count);
    return 0;
}
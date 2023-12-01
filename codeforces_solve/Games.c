#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int kit[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&kit[i][j]);
        }
    }
     for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            if(kit[a][0]==kit[b][1])count++;
        }
    }
    printf("%d",count);
    return 0;
}
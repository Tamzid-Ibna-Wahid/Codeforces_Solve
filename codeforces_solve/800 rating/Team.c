#include <stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    int sure[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&sure[i][j]);
        }
    }
    for(int z=0;z<n;z++){
        if(sure[z][0]+sure[z][1]+sure[z][2]>=2){
     x++;
    }
    }
    printf("%d",x);
    return 0;
}
// 3
// 1 1 0
// 1 1 1
// 1 0 0
// 2
// 1 0 0
// 0 1 1

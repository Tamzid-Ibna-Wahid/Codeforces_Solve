#include <stdio.h>
int main(){
    int t,n,x,distance,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&n,&x);
        int p[n];
        for(int j=0;j<n;j++){
            scanf("%d",&p[j]);
        }
        distance=p[0];
        for(int k=0;k<n-1;k++){
            a=p[k+1]-p[k];
            if(a>distance)distance=a;
        }
        if(distance<2*(x-p[n-1])){
            distance=2*(x-p[n-1]);
        }
        printf("%d\n",distance);
    }
    return 0;
}
#include <stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    int x,y,k;
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&x,&y,&k);
         if (y<=x){
        printf("%d\n",x);
        }
        else {
            n=x+k;
            if(n>=y){
                printf("%d\n",y);
            }
           else if(n<y){
            m=2*(y-n);
                printf("%d\n",n+m);
            
            }
        }
    }
    return 0;
}
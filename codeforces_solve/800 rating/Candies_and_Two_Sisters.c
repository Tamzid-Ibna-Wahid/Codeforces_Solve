#include <stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        if(x==1 || x==2)printf("0\n");
        else{
            if(x%2==0){printf("%d\n",x/2-1);}
            else printf("%d\n",x/2);
        }
    }
    return 0;
}
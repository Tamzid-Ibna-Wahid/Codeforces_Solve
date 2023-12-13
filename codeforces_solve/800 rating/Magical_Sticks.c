#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x==1||x==2)printf("1\n");
        else if(x%2==0)printf("%d\n",x/2);
        else printf("%d\n",x/2+1);
    }
    return 0;
}
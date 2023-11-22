#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
    if(x%3==0)printf("Second\n");
    else printf("First\n");
        }
    
    return 0;
}
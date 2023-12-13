#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1)printf("I hate it");
    else{
        for(int i=1;i<=n;i++){
            if(i==n){
                if(i%2==0)printf("I love it");
                else printf("I hate it");
            }
            else if(i%2!=0){
              printf("I hate that ");
            }
            else printf("I love that ");
        }
    }
    return 0;
}
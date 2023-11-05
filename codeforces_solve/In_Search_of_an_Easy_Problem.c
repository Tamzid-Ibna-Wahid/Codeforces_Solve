#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int openion[n];
    for(int i=0;i<n;i++){
        scanf("%d",&openion[i]);
        if(openion[i]==1){
            count=1;
        }
    }
    if(count==1){
        printf("hard");
    }
    else printf("easy");
    
    return 0;
}
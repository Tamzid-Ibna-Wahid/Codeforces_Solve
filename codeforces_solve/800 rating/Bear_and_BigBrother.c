#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int count=0;
    while(x<=y){
        x*=3;
        y*=2;
        count++;
     }
    printf("%d",count);
    return 0;
}
#include <stdio.h>
int main(){
    int n,h,width=0;
    scanf("%d%d",&n,&h);
    int person_h[n];
    for(int i=0;i<n;i++){
        scanf("%d",&person_h[i]);
        if(person_h[i]>h){
            width=width+2;
        }
        else width++;
    }
    printf("%d",width);
    return 0;
}
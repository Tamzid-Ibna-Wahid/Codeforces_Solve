#include <stdio.h>
int main(){
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int year[n];
    for(int i=0;i<n;i++){
        scanf("%d",&year[i]);
        if(5-year[i]>=k)count++;
    }
    printf("%d",count/3);
    return 0;
}
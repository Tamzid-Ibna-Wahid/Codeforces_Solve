#include <stdio.h>
int main(){
    int n,count=0,x;
    scanf("%d",&n);
    int meg[n];
    for(int i=0;i<n;i++){
        scanf("%d",&meg[i]);
    }
    x=meg[0];
     for(int j=0;j<n;j++){
        if(meg[j]!=x){
            count++;
            x=meg[j];
        }
    }
    printf("%d",count+1);    //+1 because last gpr count korar jonno
        return 0;
}
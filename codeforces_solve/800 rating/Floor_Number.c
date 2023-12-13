#include <stdio.h>
int main(){
    int t,a,n;
    scanf("%d",&t);
    while(t--){
        int count=1;
        scanf("%d%d",&a,&n);
        if(a==1 || a==2)printf("1\n");
        else{
            a=a-2;
            while(a>0){
                a=a-n;
                count++;
            }
        printf("%d\n",count);
        }
    }
    return 0;
}
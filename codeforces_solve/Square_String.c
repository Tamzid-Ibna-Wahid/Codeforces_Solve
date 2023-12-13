#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[101];
        scanf("%s",s);
        int x=strlen(s),a=1;
        if(x%2!=0)printf("NO\n");
        else{
            for(int i=0;i<x/2;i++){
                if(s[i]!=s[x/2+i]){
                    printf("NO\n");
                    a=0;
                    break;  
                }
            }
            if(a)printf("YES\n");
        }
    }
    return 0;
}
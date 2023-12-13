#include <stdio.h>
int main(){
    int t;
    char x[3];
    scanf("%d",&t);
    while(t--){
        scanf("%s",x);
        for(int i=1;i<9;i++){
            if(x[1]-48==i)continue;
            printf("%c%d\n",x[0],i);
        }
        for(char j='a';j<'i';j++){
            if(x[0]==j)continue;
            printf("%c%c\n",j,x[1]);
        }
    }
    return 0;
}
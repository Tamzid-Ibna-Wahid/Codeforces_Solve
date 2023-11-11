#include <stdio.h>
#include <string.h>
int main(){
    char x[105],y[105];
    scanf("%s%s",&x,&y);
    for(int i=0;i<strlen(x);i++){
       if(x[i]==y[i]){printf("%d",0);}
       else {printf("%d",1);}
    }
    return 0;
}
#include <stdio.h>
int main(){
    int n,count=0;
    char s[15];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s);
    if(s[0]=='T')count=count+4;
    else if(s[0]=='C')count=count+6;
    else if(s[0]=='O')count=count+8;
    else if(s[0]=='D')count=count+12;
    else  count=count+20;
    }
    printf("%d",count);
    return 0;
}
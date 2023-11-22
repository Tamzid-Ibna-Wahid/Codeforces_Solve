#include <stdio.h>
#include <string.h>
int main(){
    char s[105],t[105];
    int count=0;
   scanf("%s%s",s,t);
    int x=strlen(s);
    for(int i=0,j=x;i<x,j>=1;i++,j--){
            if( s[i]!=t[j-1]){       // j-1 disi karon array 0 index theke suru hoy
                printf("NO\n");
                break;
            }
            count++;
        }
        if(count==x){
            printf("YES");
        }
    return 0;
}

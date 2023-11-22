#include <stdio.h>
#include<string.h>
int main(){
    int t;
        char s1[4]="yes";       // with null character ('\0') size is 4
        char s2[4]; 
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",s2);
     
        if(strcasecmp(s1,s2)==0)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    scanf("%[^\n]s",s);
    int count=strlen(s)/3;
    for(int i=1;s[i]!='\0';i+=3){
        for(int j=i+3;s[j]!='\0';j+=3){
            if(s[i]==s[j]){
                count--;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
    int x,i,j;
    int count;
    char name[101];
    scanf("%s",name);
    x=strlen(name);
    count=x;
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(name[i]==name[j]){
               count--;
               break;
            }
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!");
    }
    else printf("IGNORE HIM!");
   return 0;
}
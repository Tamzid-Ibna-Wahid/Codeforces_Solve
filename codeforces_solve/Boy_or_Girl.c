#include <stdio.h>
#include <string.h>
int main(){
    int x,i,j;
    char name[100];
    scanf("%s",name);
    x=strlen(name);
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(name[i]==name[j]){
                x=x-1;
            }
        }
    }
    printf("%d",x);
//     if(x%2==0){
//         printf("CHAT WITH HER!");
//     }
//     else printf("IGNORE HIM!");
//     return 0;
}
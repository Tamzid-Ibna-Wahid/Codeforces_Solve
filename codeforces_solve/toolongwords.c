#include <stdio.h>
#include <string.h>
int main(){
    char letter[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%s",letter);
    if(strlen(letter)>10){
        printf("%c%d%c\n",letter[0],strlen(letter)-2,letter[strlen(letter)-1]);
    }
    else {printf("%s\n",letter);}
    }
    return 0;
}
// 4
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis
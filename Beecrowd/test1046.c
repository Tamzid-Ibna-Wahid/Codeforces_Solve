#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<y && y<=24){
    printf("O JOGO DUROU %d HORA(S)\n",y-x);
    }
    else{
printf("O JOGO DUROU %d HORA(S)\n",(24-x)+y);
    }
    return 0;
}
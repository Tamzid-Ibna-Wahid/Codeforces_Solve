#include <stdio.h>
int main(){
    int n,m,i,flag=0;
    scanf("%d%d",&n,&m);
    i=n*m;
    char colour;
    while(i--){
        scanf(" %c",&colour);         //%c er age space hobe
        if(colour=='C'||colour=='M'||colour=='Y'){
            flag=1;
        }
    }
          if(flag==1) printf("#Color\n");
        else printf("#Black&White\n");
      
    return 0;
}
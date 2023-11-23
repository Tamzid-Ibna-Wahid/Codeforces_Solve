#include <stdio.h>
int main(){
    int num[5][5],a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&num[i][j]);
            if(num[i][j]==1){
                a=i+1;
                b=j+1;
            }
        }
        printf("\n");
    }
    if(a<=3 && b<=3) printf("%d",(3-a)+(3-b));
   else if(a<=3 && b>=3) printf("%d",(3-a)+(b-3));
     else if(a>=3 && b>=3) printf("%d",(a-3)+(b-3));
       else if(a>=3 && b<=3) printf("%d",(a-3)+(3-b));
    return 0;
}
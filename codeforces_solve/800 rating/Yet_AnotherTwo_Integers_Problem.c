#include <stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        if(a==b)printf("%d\n",0);
        else if(b>a){
            int c=b-a;
        if(c>10){
            int d=c/10;
            if(c%10==0) printf("%d\n",d);
            else printf("%d\n",d+1);
        }
        else {printf("%d\n",1);}
        }
        else {
            int c=a-b;
            if(c>10){
                int d=c/10;
                if(c%10==0) printf("%d\n",d);
               else printf("%d\n",d+1);
            }
            else printf("%d\n",1);
        }
    }
    return 0;
}
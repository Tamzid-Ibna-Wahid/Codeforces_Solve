#include <stdio.h>
int main(){
    int t,a,b,c,sum;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b){
            if(b>c)sum=a+b;
            else sum=a+c;
        }
        else{
            if(a>c)sum=a+b;
            else sum=b+c;
        }
        if(sum>=10)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
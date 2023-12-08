#include <stdio.h>
int main(){
    int t,n,T,I,m,u,r;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    char name[n+1];
    scanf("%s",name);
    if(n==5){
      T=0;I=0;m=0;u=0;r=0;
    for(int i=0;i<=n;i++){
        if(name[i]=='T')T++;
       else if(name[i]=='i')I++;
         else if(name[i]=='m')m++;
           else if(name[i]=='u')u++;
             else if(name[i]=='r')r++;
    }
    if(T==1  && I==1  && m==1 && u==1 && r==1)printf("YES\n");
    else printf("NO\n");
    }
    else printf("NO\n");
    }
    return 0;
}
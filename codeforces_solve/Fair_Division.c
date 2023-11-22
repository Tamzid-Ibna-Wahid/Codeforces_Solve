#include <stdio.h>
int main(){
     int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int w_one=0,w_two=0;
    scanf("%d",&n);
    int w[n];
    for(int j=0;j<n;j++){
        scanf("%d",&w[j]);
    }
     for(int k=0;k<n;k++){
       if(w[k]==1){
        w_one++;
       }
       else w_two++;
    }
   if(w_one%2==0 && w_two%2==0)printf("YES\n");
   else if(w_two%2!=0 && w_one%2==0 && w_one!=0){
    int full =(w_two*2)+w_one;
    if(full%2==0)printf("YES\n");
   }
   else printf("NO\n");
    }
    return 0;
}